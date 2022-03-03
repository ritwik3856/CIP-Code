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
node *Einsert(node *head,int x){
    node *temp=new node(x);
    if(head==NULL)
    return temp;
    temp->next=NULL;
    node *curr=head;
    while(curr->next!=NULL)
    curr=curr->next;
    curr->next=temp;
    return head;
}
int main(){
    int x=55;
    node *head=new node(23);
    head->next=new node(45);
    head->next->next=new node(54);
    head=Einsert(head,x);
    print(head);
return 0;
}