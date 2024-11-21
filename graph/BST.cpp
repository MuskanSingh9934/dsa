#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node* left;
    node* right;
    node(int val){
        data = val;;
        left = NULL;    
        right = NULL;
    }
};


node* insertBTS(node* root, int val){
    if(root == NULL){
        return new node(val);
    }
    if(val< root -> data){
        root -> left= insertBTS(root -> left , val );
    }else {
        // val > root = right

        root -> right= insertBTS(root -> right, val);
    }
    return  root ;
    void inorder(node* root){
        if(root == NULL){
            return;
        };
        inorder(root -> left);
        cout<< root -> data<< " ";
        inorder(root -> right);
    }
}

int main(){
    node* root =NULL;
    root  = insertBTS(root ,5);
    insertBTS(root , 1);
    insertBTS(root, 4);
    insertBTS(root,7);

inorder(root);
    cout<< endl;

    return;
}
