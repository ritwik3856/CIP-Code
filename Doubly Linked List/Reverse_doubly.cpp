#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
    node *prev;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};
void print(node *head){
    node *curr=head;
    while(curr){
        cout<<curr->data<<" ";
    curr=curr->next;
    }
}
node  *reverse(node *head){
   if(head==NULL || head->next==NULL)
   return head;
   node *curr=head,*prev=NULL;
   while(curr){
       prev=curr->prev;
       curr->prev=curr->next;
       curr->next=prev;
       curr=curr->prev;
   }
   return prev->prev;
}
int main() {
    int data=6;
    node *head=new node(3);
    node *temp1=new node(4);
    node *temp2=new node(5);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head=reverse(head);
    print(head);
    
}