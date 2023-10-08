#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;
        node(int val){
            data = val;
            next = NULL;
        }
};

void EnQuene(node* &front, node* &rear, int val){
    node* n = new node(val);
    if(front == NULL && rear == NULL){
        front = n;
        rear = n;
        return;
    }
    rear->next = n;
    rear = n;
}

void DeQueue(node* &front, node* &rear){
    if(front == NULL){
        cout << "Queue is empty. Cannot dequeue.\n";
        return;
    }
    if(front == rear){
        delete front;
        front = rear = NULL;
    }
    else {
        node* temp = front;
        front = front->next;
        delete temp;
    }
}


void peek(node* front){
    cout << front->data << "\n";
}

bool isEmpty(node* front){
    if(front == NULL){
        return true;
    }
    return false;
}

void display(node* front){
    while(front != NULL){
        cout << front->data << " -> ";
        front = front->next;
    }
    cout << "null\n";
}

int main() {
    node* front = NULL;
    node* rear = NULL;
    EnQuene(front,rear,1);
    DeQueue(front,rear);
    EnQuene(front,rear,2);
    EnQuene(front,rear,3);
    display(front);
    peek(front);
    return 0;
}