#include <bits/stdc++.h>
using namespace std;

void selectionSortRecursionMethod(int arr[],int size,int temp){
    if(size==1){return;}
    int k=temp;
    int min=arr[k];
    for(int i=temp;i<size;i++){
        if(min>=arr[i]){
            min=arr[i];
            k=i;
        }
    }
    swap(arr[temp],arr[k]);
    if(temp==size){return;}
    selectionSortRecursionMethod(arr,size,++temp);
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
    int t=0;
    selectionSortRecursionMethod(arr,n,t);
    printArray(arr,n);
    return 0;
}