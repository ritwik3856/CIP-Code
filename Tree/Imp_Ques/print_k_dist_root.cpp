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
void print_inorder(bt *root){
  if(root!=NULL){
      print_inorder(root->left);
      cout<<root->key<<" ";
      print_inorder(root->right);
  }
}
void printkdist(bt *root,int k){
    if(root==NULL)return;
    if(k==0){cout<<root->key<<" ";}
    else {
        printkdist(root->left,k-1);
        printkdist(root->right,k-1);
    }
}
int main(){
    bt *root=new bt(2);
    root->left=new bt(3);
    root->right=new bt(4);
    root->left->left=new bt(5);
    cout<<"Inorder printing or nodes   ";
    print_inorder(root);
    cout<<endl;
    printkdist(root,2);
    return 0;
}