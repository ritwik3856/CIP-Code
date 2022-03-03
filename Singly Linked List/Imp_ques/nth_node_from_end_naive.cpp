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
void Nth_node_naive(node *head,int n){
   int len=0;
   for(node *curr=head;curr!=NULL;curr=curr->next)
   len++;
   if(len<n)
   return ;
   node *curr=head;
   for(int i=0;i<(len-n);i++)
   curr=curr->next;
   cout<<curr->data<<endl;
    
}
int main(){
    int n=2;
    node *head=new node(5);
    head->next=new node(10);
    head->next->next=new node(20);
    head->next->next->next=new node(25);
    head->next->next->next->next=new node(30);
    Nth_node_naive(head,n);
    print(head); 
}
