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
bst *insert(bst *root,int data){
    if(root==NULL)
    return new bst(data);
    else if(root->key>data)
    root->left=insert(root->left,data);
    else 
    root->right=insert(root->right,data);
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
    root=insert(root,13);
    print(root);
}