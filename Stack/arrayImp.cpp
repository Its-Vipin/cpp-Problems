#include<iostream>
#include<stack>
using namespace std;

void push(int arr[],int& top,int val){
    top = top + 1;
    arr[top] = val;
}

int main(){
    int a[10];
    int top = -1;
    push(a,top,5);
    push(a,top,5);
    push(a,top,5);
    cout << a[1];
    return 0;
}
