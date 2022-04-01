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
node *insert_end(node *head,int data){
    node *temp=new node(data);
    if(head==NULL)
    return temp;
    node *curr=head;
    while(curr->next!=NULL)
    curr=curr->next;
    curr->next=temp;
    temp->prev=curr;
    return head;
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
    head=insert_end(head,data);
    print(head);
}