#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }
};

void insertionAtTail(Node* &head, int val){

    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* current = head;
    while(current->next!=NULL){
        current=current->next;
    }
    current->next = newNode;
}

void insertionAtHead(Node* &head,int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    newNode->next = head;
    head=newNode;
}

void printLinkedList(Node* head){
    Node* current = head;
    while(current!=NULL){
        cout << current->data << " ";
        current=current->next;
    }
    cout << endl;
}

int main(){
    Node* head=NULL;
    insertionAtTail(head,1);
    insertionAtTail(head,2);
    insertionAtTail(head,3);
    insertionAtTail(head,4);
    insertionAtHead(head,2);
    insertionAtHead(head,0);
    printLinkedList(head);
    return 0;
}