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
bool search(bst *root, int data){
    if(root==NULL)
    return 0;
    else if(root->key==data)
    return 1;
    else if(root->key>data)
    return search(root->left,data);
    else
    return search(root->right,data);
}

int main(){
    bst *root=new bst(10);
    root->left=new bst(5);
    root->right=new bst(15);
    root->right->right=new bst(18);
    root->right->left=new bst(12);
    cout<<search(root,15);
    return 0;
}