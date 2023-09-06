#include <iostream>
using namespace std;

void binarySearchRecursionMethod(int arr[],int beg,int end,int element){
    int mid=(beg+end)/2;
    if(element==arr[mid]){cout << "Element found at " << mid << " index." << "\n";}
    else if(element>arr[mid]){binarySearchRecursionMethod(arr,mid+1,end,element);}
    else{binarySearchRecursionMethod(arr,beg,mid-1,element);}
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
    int beg=0;
    int end=n-1;
    binarySearchRecursionMethod(arr,beg,end,element);
    return 0;
}