#include <iostream>
using namespace std;

void bubbleSortRecursionMethod(int arr[],int size){
    if(size==1){return;}
    for(int i=0;i<size-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubbleSortRecursionMethod(arr,size-1);
}
void printArray(int arr[],int size){
    cout << "Sorted Array: ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bubbleSortRecursionMethod(arr,n);
    printArray(arr,n);
    return 0;
}