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
bst *getsucc(bst *root){
    bst *curr=root->right;
    while(curr!=NULL && curr->left!=NULL){
        curr=curr->left;
    }
    return curr;
}
bst *del(bst *root, int data){
    if(root==NULL)
    return root;
    else if(root->key>data)
    root->left=del(root->left,data);
    else if(root->key<data)
    root->right=del(root->right,data);
    else{
        if(root->right==NULL){
            bst * temp=root->left;
            delete(root);
            return temp;
        }
        else if(root->left==NULL){
            bst * temp=root->right;
            delete(root);
            return temp;
        }
        else {
            bst *succ=getsucc(root);
            root->key=succ->key;
            root->right=del(root->right,succ->key);
        }
    }
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
    root=del(root,15);
    print(root);
}