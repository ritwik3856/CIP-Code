#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void print(node *head){
    if(head==NULL)
    return;
    cout<<head->data<<" ";
    for(node *p=head->next;p!=head;p=p->next)
    cout<<p->data<<" ";
}
node *del_head(node *head){
    node *curr=head;
    while(curr->next!=head)
    curr=curr->next;
    curr->next=head->next;
    node *temp=head;
    delete temp;
    return (curr->next);
}
node *del_kth(node *head,int k){
    if(head==NULL)
        return NULL;
   if(k==1)
   return del_head(head);
   node *curr=head;
   for(int i=0;k-2>i;i++)
       curr=curr->next;
       node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
}
int main(){
    int k=4;
    node *head=new node(3);
    head->next=new node(4);
    head->next->next=new node(6);
    head->next->next->next=new node(7);
    head->next->next->next->next=head;
    head=del_kth(head,k);
    print(head);
    return 0;
}
