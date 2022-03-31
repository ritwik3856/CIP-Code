#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void print(Node *head) {
   Node *curr=head;
   while(curr!=NULL){
       cout<<curr->data<<" ";
       curr=curr->next;
   }
}
int main(){
    Node *head=new Node(5);
    head->next=new Node(6);
    head->next->next=new Node(7);
    print(head);
    return 0;
}