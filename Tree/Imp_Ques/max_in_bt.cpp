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
int max_bt(node *root){
    if(root==NULL)
    return INT_MIN;
    else
    return max(root->key,max(max_bt(root->left),max_bt(root->right)));
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
    cout<<max_bt(root);
    return 0;
}