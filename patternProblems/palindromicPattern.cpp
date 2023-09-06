#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<2*n;j++){
            if(j<n-i+1){
                cout << "  ";
            }
            else if(j>n+i-1){
                cout << "  ";
            }
            else{
                if(j<=n){
                    cout << n-j+1 << " ";
                }
                else{
                    cout << j-n+1 << " ";
                }
            }
        }
        cout << endl;
    }

    return 0;
}