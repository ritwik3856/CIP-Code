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
   do{
       cout<<curr->data<<" ";
       curr=curr->next;
   }while(curr!=head);
}
node *insert(node *head,int data){
    node *temp=new node (data);
    if(head==NULL){
        temp->next=temp;
        temp->prev=temp;
        return temp;
    }
    temp->next=head;
    temp->prev=head->prev;
    head->prev->next=temp;
    return temp;
}
int main() {
    node *head=new node(3);
    node *temp1=new node(4);
    node *temp2=new node(5);
    head->next=temp1;
    head->prev=temp2;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    temp2->next=head;
    head=insert(head,9);
    print(head);
    
}