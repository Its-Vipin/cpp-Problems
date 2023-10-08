#include<bits/stdc++.h>
using namespace std;

int prefix(string s){
    stack<int> store;
    for(int i=s.size()-1;i>=0;i++){
        if(s[i] != '-' && s[i] != '+' && s[i] != '*' && s[i] != '/'){
            int num = (int)s[i] - 48;
            store.push(num);
        }
    }
}

int main(){
    string s;
    cin >> s;
    cout << prefix(s) << endl;
    return 0;
}