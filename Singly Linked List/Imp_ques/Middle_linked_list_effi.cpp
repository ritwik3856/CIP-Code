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
void Middle(node *head){
 if(head==NULL)
 return ;
 node *fast=head,*slow=head;
 while(fast!=NULL && fast->next!=NULL){
     fast=fast->next->next;
     slow=slow->next;
}
cout<<slow->data;
cout<<endl;
}
int main(){
    node *head=new node(5);
    head->next=new node(10);
    head->next->next=new node(20);
    head->next->next->next=new node(25);
    Middle(head);
    print(head); 
}
