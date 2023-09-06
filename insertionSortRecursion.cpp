#include <iostream>
using namespace std;

void insertionSortRecursionMethod(int arr[],int size,int temp){
    if(size==1){return;}
    for(int i=temp-1;i>0;i--){
        if(arr[i]<arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
    }
    if(temp==size){return;}
    
    insertionSortRecursionMethod(arr,size,++temp);
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
    int t=2;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    insertionSortRecursionMethod(arr,n,t);
    printArray(arr,n);
    return 0;
}