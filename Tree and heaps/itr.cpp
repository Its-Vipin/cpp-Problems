#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

node* buildTree(node* root){
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new node(data);
    if(data == -1){
        return NULL;
    }
    cout << "For left node of "<<data << endl;
    root->left = buildTree(root->left);
    cout << "For right node of "<<data << endl;
    root->right = buildTree(root->right);

    return root;
}

void inorder(node* root){
    
    stack<node*> s;
    node* cur = root;

    while(cur || !s.empty()){
        while(cur){
            s.push(cur);
            cur=cur->left;
        }

        cur=s.top();
        s.pop();
        
        cout << cur->data << " ";
        cur = cur->right;
    }
}

void preorder(node* root){
    queue<node*> s;
    node* cur = root;
    while(cur || !s.empty()){
        while(cur){
            q.push(cur)
        }
    }
}

int main() {
    node* root = NULL;

    root = buildTree(root);

    inorder(root);

    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    return 0;
}