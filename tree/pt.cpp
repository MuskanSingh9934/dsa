#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int val;
    node* left;
    node* right;
    node(int data){
        val = data;
        left = NULL;
        right = NULL;
    }
};


void print(node*root){
    if(root==NULL)return;
    
      cout<<root->val<<" ";
    print(root->left);
    print(root->right);
   
}
int main(){
    node*root=new node(0);
    root->left= new node(1);
    root ->right =new node(2);
    print (root);

}