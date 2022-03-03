#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node (int x){
        data=x;
        next=NULL;
    }
};
void print(node *head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
node *remove_dup(node *head){
   node *curr=head;
   while(curr!=NULL && curr->next!=NULL){
       if(curr->data==curr->next->data)
       {
           node *temp=curr->next;
           curr->next=curr->next->next;
           delete(temp);
       }
       else
       curr=curr->next;
   }
   return head;
}
int main(){
    node *head=new node(5);
    head->next=new node(10);
    head->next->next=new node(10);
    head->next->next->next=new node(25);
    head->next->next->next->next=new node(30);
    head=remove_dup(head);
    print(head); 
}
