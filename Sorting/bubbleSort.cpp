#include <iostream>
using namespace std;

void bubbleSortMethod(int arr[],int size){
    if(size==1){
        cout << "No need of sorting." << "\n";
    }
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout << "Sorted array: ";
    for(int i=0;i<size;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bubbleSortMethod(arr,n);
    return 0;
}