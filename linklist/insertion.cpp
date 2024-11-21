/*#include<bits/stdc++.h>
using namespace std;
class node{
    public:

    int val;

    node* next;

    node(int num){
        val =num;

        next= NULL;
    }
};


node* tail = NULL;


void insertAtFirst(node* &head ,int n){


    node*node1=new node(n);
    node1->next=head->next;
    head->next=node1;


}

 void insertAtLast(int n){
        node*node1=new node(n);
        tail -> next=node1;
        tail = node1;

    }

int main(){

    node*head =new node(0);
    tail = head;
    insertAtFirst(head ,10);
    insertAtFirst(head ,20);
    insertAtFirst(head ,30);
    insertAtFirst(head ,40);



    insertAtLast(15);
    insertAtLast(19);
    insertAtLast(21);
    insertAtLast(22);


    while(head !=NULL){
        cout<< head-> val<<" ";
        head=head->next;
    }


}*/

/*#include<bits/stdc++.h>

using namespace std;
 class node{
    public:
    int val;
    node* next;

    node(int num){

        val = num;
         next = NULL;

    }
 };

    node* tail= NULL;

 void InsertAtFirst(node* &head, int n){

    node*node1=new node(n);
    node1-> next= head-> next;
    head-> next = node1;

 }



 int main(){

        node* head =new node(0);
        tail= head;

        InsertAtFirst( head,1);
        InsertAtFirst( head,2);
        InsertAtFirst(head,3);

        while (head != NULL){

            cout<<head -> val<< " ";

            head= head -> next;


        }
 }*/

#include<bits/stdc++.h>
using namespace std;
class node{
    public:

    int val;

    node* next;

    node(int num){
        val =num;

        next= NULL;
    }
};


node* tail = NULL;


void insertAtFirst(node* &head ,int n){


    node*node1=new node(n);
    node1->next=head->next;
    head->next=node1;


}

 void insertAtLast(int n){
        node*node1=new node(n);
        tail -> next=node1;
        tail = node1;

    }

int main(){

    node*head =new node(0);
    tail = head;
    insertAtFirst(head ,10);
    insertAtFirst(head ,20);
    insertAtFirst(head ,30);
    insertAtFirst(head ,40);



    insertAtLast(15);
    insertAtLast(19);
    insertAtLast(21);
    insertAtLast(22);


    while(head !=NULL){
        cout<< head-> val<<" ";
        head=head->next;
    }


} 