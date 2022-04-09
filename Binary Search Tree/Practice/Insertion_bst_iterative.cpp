#include<iostream>
using namespace std;

struct bst{
    int key;
    bst *left,*right;
    bst(int k){
        key=k;
        left=right=NULL;
    }
};
bst *insert_iter(bst *root,int data){
    bst *par=NULL,*curr=root;
    while(curr!=NULL){
        par=curr;
        if(curr->key>data)
        curr=curr->left;
        else
        curr=curr->right;
    }
    bst *temp=new bst(data);
    if(par==NULL)
    return temp;
    else if(par->key>data)
    par->left=temp;
    else
    par->right=temp;
    return root;
}
void print(bst *root){
    if(root!=NULL){
        print(root->left);
        cout<<root->key<<" ";
        print(root->right);
    }
}

int main(){
    bst *root=new bst(10);
    root->left=new bst(5);
    root->right=new bst(15);
    root->right->right=new bst(18);
    root->right->left=new bst(12);
    root=insert_iter(root,13);
    print(root);
}