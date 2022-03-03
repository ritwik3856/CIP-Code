#include<iostream>
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
node *sorted(node *head,int x){
  node * temp =new node (x);
  if(head==NULL)
  return temp;
  if(x<head->data){
      temp->next=head;
      return temp;
  }
    node *curr=head;
    while(curr->next!=NULL && curr->next->data<x)
        curr=curr->next;
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
int main(){
    int x=15;
    node *head=new node(5);
    head->next=new node(10);
    head->next->next=new node(20);
    head->next->next->next=new node(25);
    head=sorted(head,x);
    print(head); 
}
