#include<bits/stdc++.h>
using namespace std;

int evaluatePostfix(string s){
    stack<int> st;

    for(int i=0;i<s.length();i++){
        if(s[i] >= '0' && s[i] <='9'){
            st.push(s[i] - '0');
        }
        else{
            int op1=st.top();
            st.pop();
            int op2=st.top();
            st.pop();
            switch(s[i]){
                case '+':
                    st.push(op1+op2);
                    break;
                case '-':
                    st.push(op2-op1);
                    break;
                case '*':
                    st.push(op1*op2);
                    break;
                case '/':
                    st.push(op2/op1);
                    break;
            }
        }
    }
    return st.top();
}


// int evaluatePostfix(string s){
//     stack<int> store;
//     for(int i=0;i<s.size();i++){
//         if(s[i] != '-' && s[i] != '+' && s[i] != '*' && s[i] != '/'){
//             int num = (int)s[i] - 48;
//             store.push(num);
//         }
//         else{
//             int b = store.top();store.pop();
//             int a = store.top();store.pop();
//             switch(s[i]){
//                 case '-':
//                     a = a - b;
//                     store.push(a);break;
//                 case '+':
//                     a = a + b;
//                     store.push(a);break;
//                 case '*':
//                     a = a * b;
//                     store.push(a);break;
//                 case '/':
//                     a = a / b;
//                     store.push(a);break;
//             }
//         }
//     }
//     return store.top();
// }

int main(){
    string s;
    cin >> s;
    cout << evaluatePostfix(s) << endl;
    return 0;
}