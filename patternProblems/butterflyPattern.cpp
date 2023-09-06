#include <bits/stdc++.h>
using namespace std;

// Butterfly Pattern
// Challenge ; Use only 1 outer loop with 1 nested loop

int main(){
    int n;
    cin >> n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=i){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        for(int j=1;j<=n;j++){
            if(j<=n-i){
                cout << "  ";
            }
            else{
                cout << "* ";
            }
        }
        cout << endl;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j<=n-i+1){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        for(int j=1;j<=n;j++){
            if(j<=i-1){
                cout << "  ";
            }
            else{
                cout << "* ";
            }
        }

        cout << endl;
        
    }

    return 0;
}