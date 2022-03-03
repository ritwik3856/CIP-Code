#include<bits/stdc++.h>
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
node *reverse_naive(node *head){
 node *pre=NULL,*curr=head;
 while(curr!=NULL){
     node *next=curr->next;
     curr->next=pre;
     pre=curr;
     curr=next;
 }
 return pre;
}
int main(){
    node *head=new node(5);
    head->next=new node(10);
    head->next->next=new node(20);
    head->next->next->next=new node(25);
    head->next->next->next->next=new node(30);
    head=reverse_naive(head);
    print(head); 
}
