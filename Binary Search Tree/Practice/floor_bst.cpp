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
int fl(bst *root,int s){
    int res=0;
    while(root!=NULL){
        if(root->key==s)
        return root->key;
        else if(root->key>s)
        root=root->left;
        else{
            res=root->key;
            root=root->right;
        }
    }
    return res;
}
int main(){
    bst *root=new bst(10);
    root->left=new bst(5);
    root->right=new bst(15);
    root->right->right=new bst(30);
    root->right->left=new bst(12);
    cout<<fl(root,100);
}