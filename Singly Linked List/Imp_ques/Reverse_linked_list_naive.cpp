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
void reverse_naive(node *head){
   vector <int> arr;
   for(node *curr=head;curr!=NULL;curr=curr->next){
       arr.push_back(curr->data);
   }
   for(node *curr=head;curr!=NULL;curr=curr->next){
       curr->data=arr.back();
      // arr.pop_back();
   }
}
int main(){
    node *head=new node(5);
    head->next=new node(10);
    head->next->next=new node(20);
    head->next->next->next=new node(25);
    head->next->next->next->next=new node(30);
    reverse_naive(head);
    print(head); 
}
