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
node *del(node *head){
    if(head==NULL)
        return NULL;
    if(head->next==head){
        delete head;
        return NULL;
    }
   head->data=head->next->data;
   node *temp=head->next;
   head->next=head->next->next;
   delete temp;
   return head;
}
int main(){
    node *head=new node(3);
    head->next=new node(4);
    head->next->next=new node(6);
    head->next->next->next=new node(7);
    head->next->next->next->next=head;
    head=del(head);
    print(head);
    return 0;
}
