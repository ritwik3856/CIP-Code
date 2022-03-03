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
node *delhead(node *head){
    if(head==NULL)
    return NULL;
    node *temp=head->next;
    delete head;
    return temp;
}
int main(){
    node *head=new node(23);
    head->next=new node(45);
    head->next->next=new node(54);
    head=delhead(head);
    print(head);

}