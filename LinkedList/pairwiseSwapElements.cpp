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

void insertAtTail(node* &head, int val){
    node* n = new node(val);
    if(head == NULL){
        head = n;
        return;
    }
    node* cur = head;
    while(cur->next != NULL){
        cur = cur->next;
    }
    cur->next = n;
}

void display(node* head){
    while(head != NULL){
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "null\n";
}

node* swap(node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* cur = head;
    node* temp = cur->next;
    cur->next = cur->next->next;
    temp->next = cur;
    head = temp;
    while(cur!= NULL && cur->next!=NULL && cur->next->next!=NULL){
        node* n = cur->next->next;
        cur->next->next = cur->next->next->next;
        n->next = cur->next;
        cur->next = n;
        cur=cur->next->next;
    }
    
    return head;
}

int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    head = swap(head);
    display(head);
    return 0;
}
