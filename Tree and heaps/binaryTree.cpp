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

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }

        
    }
}

// make fun of reverse level order traversal

void reverseLevelOrderTraversal(node* root){
    if(!root){
        return;
    }
    queue<node*> q;
    stack<int> s;

    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            s.push(-1);
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            s.push(temp->data);

            if(temp->right){
                q.push(temp->right);
            }
            if(temp->left){
                q.push(temp->left);
            }
        }
        
    }
    while(!s.empty()){
        if(s.top() == -1){
            cout << endl;
        }
        else{
            cout << s.top() << " ";
        }
        s.pop();
    }
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    int data;
    cout << "data: ";
    cin >> data;
    root = new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();q.pop();

        cout << "Enter for left of " << temp->data;
        int leftData;cin >> leftData;
        if(leftData != -1){
            temp->left = new node(leftData);
            q.push(temp->left);
        }
        cout << "Enter for right of " << temp->data;
        int rightData;cin >> rightData;
        if(rightData != -1){
            temp->right = new node(rightData);
            q.push(temp->right);
        }

    }
}

int main() {
    
    node* root = NULL;
    // root = buildTree(root);
    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    // reverseLevelOrderTraversal(root);
    return 0;
}