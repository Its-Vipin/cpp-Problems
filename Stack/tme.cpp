
#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:
    void insertAtTail(Node* &head,int val){
        Node* n = new Node(val);
        if(head == NULL){
            head = n;return;
        }
        Node* cur = head;
        while(!cur->next){
            cur = cur->next;
        }
        cur->next = n;
    }
    Node* pairWiseSwap(struct Node* head) 
    {
        vector<int> x;
        Node* cur = head;
        while(!cur){
            x.push_back(cur->data);
            cur=cur->next;
        }
        for(int i=0;i<x.size()-1;i=i+2){
            swap(x[i],x[i+1]);
        }
        head = NULL;
        for(int i : x){
            insertAtTail(head,i);
        }
        return head;
    }
};

//{ Driver Code Starts.

void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;

		int data;
		cin>>data;
		struct Node *head = new Node(data);
		struct Node *tail = head;
		map<Node*, int> mp;
		mp[head] = head->data;
		for (int i = 0; i<n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
			mp[tail] = tail->data;
		}
		struct Node *failure = new Node(-1);
		Solution ob;
		head = ob.pairWiseSwap(head);
		int flag = 0;
		struct Node *temp = head;
		while(temp){
		    if(mp[temp] != temp->data){
		        flag = 1;
		        break;
		    }
		    temp = temp->next;
		}
		if(flag)
		    printList(failure);
		else
		    printList(head);
	}
	return 0; 
}

// } Driver Code Ends