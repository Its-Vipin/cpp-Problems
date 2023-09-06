#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=2*n+3;j++){
            if(j<n-i+1){
                cout << " ";
            }
            else if((i+j)%2==0 && j<=2*n+4-i){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
            cout << endl;
    }
    return 0;
}