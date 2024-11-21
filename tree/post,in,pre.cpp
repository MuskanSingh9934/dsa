#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;
    node(int n){
        val = n;
        left = NULL;
        right = NULL;
    }
};
/* 0 
*/ 
 
void print(node* root){
    if(root == NULL) return;
    print(root -> left);
    print(root -> right);
    cout<<root -> val<<endl;
}

int main(){
    node* root = new node(0);
    root -> left = new node(1);
    root -> right = new node(2); 
    print(root);  
}
