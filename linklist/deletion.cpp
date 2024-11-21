#include<bits/stdc++.h>
using namespace std;


class node{
    public:
    int val;
    node*next;

    node(int num){
        val=num;
        next = NULL;
    }
};

void insertAtFirst(node* &head,int n){
    node* node1 = new node(n);
    node1->next=head->next;
    head->next=node1;

}

//h - 0 -> 
int main(){
    node* head = new node(0);


    insertAtFirst(head, 10);
    insertAtFirst(head, 11);
    insertAtFirst(head, 12);
    insertAtFirst(head, 13);
    insertAtFirst(head, 14);

    

    node*node1=new node(9);
    tail->next=node1
    tail = node1  
    

    while(head != NULL){
        cout<<head -> val<<" ";
        head = head -> next;
    }



    

}

/*#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node*next = NULL;
    node(int n){
        val=n;
        next = NULL;
    }
};

node* tail = NULL;

void InsertAtFirst(node* &head, int n){
    node* node1= new node(n);
    node1-> next = head -> next;
    head -> next= node1;
}


    void diasplay(node*head){
        node*tail= head;
        while(head!=NULL){
            cout<<head->val<<" ";        }
    }

int main(){
    node*node1= new node(0);
    InsertAtFirst(head, 10);
    InsertAtFirst(head,20);





    while(head = NULL){

    
        cout<<head-> val<<" ";
        head=head->next;
    }
}*/

