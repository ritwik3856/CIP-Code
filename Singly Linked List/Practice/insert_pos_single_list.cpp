#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
    node (int x){
        data=x;
        next=NULL;
    }
};
void print (node *head){
    while(head!=NULL)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}
node *Pos_insert(node *head , int data ,int pos){
   node *temp=new node(data);
   node *curr=head;
   for(int i=1;i<=pos-2;i++){
       curr=curr->next;
   }
   temp->next=curr->next;
   curr->next=temp;
   return head;
}
int main(){
    int data=88,pos=3;
    node *head=new node(34);
    head->next=new node(55);
    head->next->next=new node (66);
    head->next->next->next=new node (90);
    head=Pos_insert(head,data,pos);
    print(head);
}