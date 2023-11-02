#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>

#define ARRAY_SIZE 10

int numbers[ARRAY_SIZE];
int sorted_numbers[ARRAY_SIZE];

// Function to sort the first half of the array
void* sortFirstHalf(void* arg) {
    int* arr = (int*)arg;
    int half = ARRAY_SIZE / 2;

    for (int i = 0; i < half - 1; i++) {
        for (int j = 0; j < half - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    pthread_exit(NULL);
}

// Function to sort the second half of the array
void* sortSecondHalf(void* arg) {
    int* arr = (int*)arg;
    int half = ARRAY_SIZE / 2;

    for (int i = half; i < ARRAY_SIZE - 1; i++) {
        for (int j = half; j < ARRAY_SIZE - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    pthread_exit(NULL);
}

// Function to merge and sort the two sorted halves
void* mergeAndSort(void* arg) {
    int half = ARRAY_SIZE / 2;
    int* arr1 = numbers;
    int* arr2 = numbers + half;
    int* result = sorted_numbers;

    int i = 0, j = half, k = 0;

    while (i < half && j < ARRAY_SIZE) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < half) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < ARRAY_SIZE) {
        result[k] = arr2[j];
        j++;
        k++;
    }

    pthread_exit(NULL);
}

int main() {
    pthread_t threads[3];

    // Initialize the array of numbers with random values for demonstration purposes
    for (int i = 0; i < ARRAY_SIZE; i++) {
        numbers[i] = rand() % 100;
    }

    // Create threads to sort the first and second halves
    pthread_create(&threads[0], NULL, sortFirstHalf, numbers);
    pthread_create(&threads[1], NULL, sortSecondHalf, numbers);

    // Wait for the first two threads to complete
    for (int i = 0; i < 2; i++) {
        pthread_join(threads[i], NULL);
    }

    // Create a thread to merge and sort the two sorted halves
    pthread_create(&threads[2], NULL, mergeAndSort, NULL);

    // Wait for the third thread to complete
    pthread_join(threads[2], NULL);

    // Print the sorted array
    printf("Original array: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\nSorted array: ");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("%d ", sorted_numbers[i]);
    }
    printf("\n");

    return 0;
}
