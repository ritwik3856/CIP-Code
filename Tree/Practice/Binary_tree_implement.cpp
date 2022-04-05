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
int main(){
    bt *root=new bt(2);
    root->left=new bt(3);
    root->right=new bt(4);
    root->left->left=new bt(5);
    print_inorder(root);
    return 0;
}