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
node *reverse_naive(node *curr,node *prev){
    if(curr==NULL)return prev;
    node *next=curr->next;
    curr->next=prev;
    return reverse_naive(next,curr);
}
int main(){
    node *head=new node(5);
    node *prev=NULL;
    head->next=new node(10);
    head->next->next=new node(20);
    head->next->next->next=new node(25);
    head->next->next->next->next=new node(30);
    head=reverse_naive(head,prev);
    print(head); 
}
