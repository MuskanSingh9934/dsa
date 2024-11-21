/*#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val;
    node* next;
    node(int n){
        val = n;
        next = NULL;
    }
};
node*tail = NULL;

void addnode(int n){
    node*node1=new node(n);
    tail->next = node1;
    tail= tail->next;
}

void display(node*head){
    node* temp = head;
    while(temp !=NULL){
        cout<<temp ->val<<" ";
        temp = temp ->next;
    }
}

int main(){
    node*head=new node(0);
    tail= head;
    addnode(1);
    addnode(2);
    addnode(3);
    addnode(4);
    display(head);
}*/


#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int val ;
    node* next ;

    node(int n){
        node= val;
        next = NULL;
    }


};

node*tail = NULL;
void addnode(int n){
    node*node1=new node(n);
    tail->next = node1;
    tail=tail->next;

    }

void display(node*head){
    node*temp= head;
    while(temp != NULL){
        cout<<temp-> val<<" ";
        temp = temp-> next;


    }
}
    void main(){
        node*head= new node(0);
        addnode(1);
        addnode(2);
        addnode(3);
        addnode(4);
        display(head);
    
}


