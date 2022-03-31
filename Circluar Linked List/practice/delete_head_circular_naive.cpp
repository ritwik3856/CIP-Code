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
        return;
    if(head->next==head){
        delete head;
        return NULL;
    }
    node *curr=head;
    while(curr->next!=head)
    curr=curr->next;
    curr->next=head->next;
    delete head;
    return curr->next;
}
int main(){
    node *head=new node(3);
    head->next=new node(4);
    head->next->next=new node(6);
    head->next->next->next=head;
    head=del(head);
    print(head);
    return 0;
}
