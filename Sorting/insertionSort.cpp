#include <iostream>
using namespace std;

void insertionSortMethod(int arr[],int size){
    if(size==1){
        return;
    }
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
            // cout << "Each Step :: ";
            // for(int k=0;k<size;k++){
            //     cout << arr[k] << " ";
            // }
            cout << endl;
        }
        arr[j+1]=key;
    }
}

void printArray(int arr[],int size){
    cout << "Sorted Array: ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    insertionSortMethod(arr,n);
    printArray(arr,n);
    return 0;
}