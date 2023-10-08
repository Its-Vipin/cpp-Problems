#include<bits/stdc++.h>
using namespace std;

bool highPrec(char top, char exp){
    
}

string infixToPostfix(string s){
    stack<char> x;
    string res ="";
    for(int i=0;i<s.size();i++){
        if(s[i] != '-' && s[i] != '+' && s[i] != '*' && s[i] != '/'){
            res+=s[i];
        }
        else{
            while(!s.empty() && highPrec(x.top(), s[i]) ){
                res+=x.top();
                x.pop();
            }
            x.push(s[i]);
        }
    }
    while(!x.empty()){
        res+=x.top();
        x.pop();
    }
}

int main() {
    string s;
    cin >> s;

    return 0;
}