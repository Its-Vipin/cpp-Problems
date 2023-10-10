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

void preorder(node* root){
    if(!root){
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

int main() {
    node* root = NULL;

    root = buildTree(root);

    preorder(root);

    // 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    return 0;
}