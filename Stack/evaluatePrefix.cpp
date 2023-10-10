#include<bits/stdc++.h>
using namespace std;

int evaluatePrefix(string str){
    stack<int> s;
    for(int i=str.length()-1;i>=0;i--){

        if(str[i]>='0' && str[i] <='9' ){
            s.push(str[i]-'0');
        }
        else{
            int op1 = s.top();
            s.pop();
            int op2 = s.top();
            s.pop();

            switch (str[i])
            {
            case '+':
                s.push(op1 + op2);
                break;
            case '-':
                s.push(op1 - op2);
                break;
            case '*':
                s.push(op1 * op2);
                break;
            case '/':
                s.push(op1 / op2);
                break;
            }
        }
    }
    return s.top();
}

int main(){
    string s;
    cin >> s;
    cout << evaluatePrefix(s) << endl;
    return 0;
}