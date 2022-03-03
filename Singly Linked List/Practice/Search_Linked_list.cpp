#include<iostream>
using namespace std;

struct node {
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
int search(node *head,int s){
    int pos=1;
    while(head!=NULL){
        if(s==head->data)
        return pos;
        pos++;
        head=head->next;
    }
    return -1;
}
int main(){
    int s=4;
    node *head=new node(1);
    head->next=new node(2);
    head->next->next=new node(3);
    head->next->next->next=new node(4);
    cout<<search(head,s);
    return 0;
}
