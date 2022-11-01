#include<iostream>
#include<vector>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;

    node(int x){
        data=x;
        left=right=NULL;
    }
};

void print(node* root){
    if(root!=NULL){
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
    }
}
/* rules for morries traversal
1. build a thread to the parent node so that after printing it can go to the parent node.
2. destroy the thread after its work is done.

edge case to traverse
1. if not null then go to the left then to the right most and form the thread to the parent 
initial traversal .
2. if left node is null then print the node and go to the right or through the thread go to root.
3. after that if parent thread exist then break it and jump

        1
      /  \
     2   3
   /  \  
  4    5
        \   
         6
TC : O(n) amortized.
SC : O(1)
*/
void morris_print(node* root){
   vector<int>inorder;
   node *curr=root;
   while(curr!=NULL){
        if(curr->left==NULL){
            inorder.push_back(curr->data);
            curr=curr->right;
        }
        else{
            node* prev=curr->left;
            while(prev->right!=NULL && prev->right!=curr){
                prev=prev->right;
            }
            if(prev->right==NULL){
                prev->right=curr;
                curr=curr->left;
            }
            else{
                prev->right=NULL;
                inorder.push_back(curr->data);
                curr=curr->right;
            }
        }
   }
   for(auto i:inorder)
   cout<<i<<" ";

} 

int main(){
    node *root=new node(1);
    root->left=new node(2);
    root->right=new node(3);
    root->left->left=new node(4);
    root->left->right=new node(5);
    root->left->right->right=new node(6);

    print(root);
    cout<<'\n';

    morris_print(root);
    return 0;
}