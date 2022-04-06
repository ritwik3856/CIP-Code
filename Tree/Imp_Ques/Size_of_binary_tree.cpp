#include<bits/stdc++.h>
using namespace std;


struct node{
    int key;
    node *left,*right;
    node(int k){
        key=k;
        left=right=NULL;
    }
};
int size(node *root){
    if(root==NULL)
    return 0;
    return 1+size(root->left)+size(root->right);
}
int main(){
    node *root=new node(10);
    root->left=new node(20);
    root->right=new node(30);
    root->right->right=new node(6);
    root->left->left=new node(8);
    root->left->right=new node(7);
    root->left->right->left=new node(9);
    root->left->right->right=new node(15);
    cout<<size(root);
    return 0;
}