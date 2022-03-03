#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;
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
node *deltail(node *head){
  if(head==NULL)
  return NULL;
  if(head->next==NULL){
  delete head;
  return NULL;}
  node *curr=head;
  while(curr->next->next!=NULL)
  curr=curr->next;
  delete(curr->next);
  curr->next=NULL;
  return head;
}
int main(){
    node *head=new node(23);
    head->next=new node(45);
    head->next->next=new node(54);
    head=deltail(head);
    print(head);

}