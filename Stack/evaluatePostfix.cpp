#include<bits/stdc++.h>
using namespace std;

int postfix(string s){
    stack<int> store;
    for(int i=0;i<s.size();i++){
        if(s[i] != '-' && s[i] != '+' && s[i] != '*' && s[i] != '/'){
            int num = (int)s[i] - 48;
            store.push(num);
        }
        else{
            int b = store.top();store.pop();
            int a = store.top();store.pop();
            switch(s[i]){
                case '-':
                    a = a - b;
                    store.push(a);break;
                case '+':
                    a = a + b;
                    store.push(a);break;
                case '*':
                    a = a * b;
                    store.push(a);break;
                case '/':
                    a = a / b;
                    store.push(a);break;
            }
        }
    }
    return store.top();
}

int main(){
    string s;
    cin >> s;
    cout << postfix(s) << endl;
    return 0;
}