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
void Nth_node_effi(node *head,int n){
    if(head==NULL)
    return ;
    node *first=head;
    for(int i=0;i<n;i++)
    {
        if(first==NULL) return ;
        first=first->next;
    }    
    node *second=head;
    while(first!=NULL){
        second=second->next;
        first=first->next;
    }
    cout<<second->data<<endl;
}
int main(){
    int n=2;
    node *head=new node(5);
    head->next=new node(10);
    head->next->next=new node(20);
    head->next->next->next=new node(25);
    head->next->next->next->next=new node(30);
    Nth_node_effi(head,n);
    print(head); 
}
