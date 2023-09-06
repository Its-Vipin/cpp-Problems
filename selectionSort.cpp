#include <bits/stdc++.h>
using namespace std;

void selectionSortMethod(int arr[],int size){
    if(size==1){return;}
    for(int i=0;i<size-1;i++){
        int min=arr[i];
        int store;
        for(int j=i;j<size;j++){
            if(arr[j]<=min){
                min=arr[j];
                store=j;
            }
            
        }
        // for(int j=0;j<size;j++){
        //     if(min==arr[j]){
        //         store=j;
        //         break;
        //     }
        // }
        swap(arr[i],arr[store]);
        
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
    selectionSortMethod(arr,n);
    printArray(arr,n);
    return 0;
}