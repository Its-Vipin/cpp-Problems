#include <bits/stdc++.h>
using namespace std;

void binarySearchMethod(int arr[],int size,int element){
    int beg=0;
    int end=size-1;
    int mid=(beg+end)/2;
    while(beg<=end){

        if(element==arr[mid]){cout << "Element found at " << mid << " index." << '\n';return;}
        else if(element>arr[mid]){beg=mid+1;mid=(beg+end)/2;}
        else{end=mid-1;mid=(beg+end)/2;}
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int element;
    cin >> element;
    binarySearchMethod(arr,n,element);
    return 0;
}