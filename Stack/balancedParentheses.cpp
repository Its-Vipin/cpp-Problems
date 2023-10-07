#include<bits/stdc++.h>
using namespace std;

bool check(string str){
    int size = str.size();
    stack<char> s;
    for (int  i = 0; i < size/2; i++)
    {
        if(str[i]=='('){
            s.push(')');
        }
        else if (str[i] == '{')
        {
            s.push('}');
        }
        else if(str[i] == '['){
            s.push(']');
        }
    }
    for(int i=size/2;i<size;i++){
        if(s.top() != str[i]){
            return false;
        }
        s.pop();
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if(check(s)){
        cout << "Fine\n";
    }
    else{
        cout << "Not fine\n";
    }
    return 0;
}