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
    int count=0;
    for(node *curr=head;curr->next!=NULL;curr=curr->next){
        count++;
    }
    node *curr=head;
    for(int i=1;i<=count/2;i++){
        curr=curr->next;
    }
    cout<<curr->data<<endl;
}
int main(){
    node *head=new node(5);
    head->next=new node(10);
    head->next->next=new node(20);
    head->next->next->next=new node(25);
    Middle(head);
    print(head); 
}
