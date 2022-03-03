#include<iostream>
using namespace std;
struct node{
    int data;
    node * next;
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
node *Binsert(node *head,int x){
    node *temp=new node(x);
    temp->next=head;
    return temp;
}
int main(){
    int x=55;
    node *head=new node(23);
    head->next=new node(45);
    head->next->next=new node(54);
    head=Binsert(head,x);
    print(head);

}