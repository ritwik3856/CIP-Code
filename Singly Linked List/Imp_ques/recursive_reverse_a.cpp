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
node *reverse_a(node *head){
 if(head==NULL || head->next==NULL)
 return head;
node *rest_head=reverse_a(head->next);
node *rest_tail=head->next;
rest_tail->next=head;
head->next=NULL;
return rest_head;
}
int main(){
    node *head=new node(5);
    head->next=new node(10);
    head->next->next=new node(20);
    head->next->next->next=new node(25);
    head->next->next->next->next=new node(30);
    head=reverse_a(head);
    print(head); 
}
