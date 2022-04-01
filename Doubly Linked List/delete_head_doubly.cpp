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
node *deletehead(node *head){
    if(head==NULL)
    return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
  node *temp=head;
  head=head->next;
  head->prev=NULL;
  delete temp;
  return head;
    
}
int main() {
    node *head=new node(3);
    node *temp1=new node(4);
    node *temp2=new node(5);
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head=deletehead(head);
    print(head);
    
}