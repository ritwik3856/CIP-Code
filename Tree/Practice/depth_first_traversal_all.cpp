#include<iostream>
using namespace std;

struct bt{
    int key;
    bt *left,*right;
    bt(int k){
        key=k;
        left=right=NULL;
    }
};
void inorder(bt *root){
  if(root!=NULL){
      inorder(root->left);
      cout<<root->key<<" ";
      inorder(root->right);
  }
}
void preorder(bt *root){
    if(root!=NULL){
        cout<<root->key<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(bt*root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->key<<" ";
    }
}
int main(){
    bt *root=new bt(10);
    root->left=new bt(20);
    root->right=new bt(30);
    root->right->left=new bt(40);
    root->right->right=new bt(50);
    cout<<"Inorder printing of nodes   ";
    inorder(root);
    cout<<"\npreorder printing of nodes   ";
    preorder(root);
     cout<<"\npostorder printing of nodes   ";
    postorder(root);
    return 0;
}