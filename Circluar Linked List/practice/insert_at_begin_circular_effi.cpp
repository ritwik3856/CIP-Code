#include<iostream>
using namespace std;

struct fuck{
    int data;
    fuck *next;
    fuck(int x){
        data=x;
        next=NULL;
    }
};
void print(fuck *head){
    if(head==NULL)
    return;
    cout<<head->data<<" ";
    for(fuck *p=head->next;p!=head;p=p->next)
    cout<<p->data<<" ";
}
void insert(fuck *head,int x){
    fuck *temp=new fuck(x);
    if(head==NULL){
        temp->next=temp;
    }
    else {
    temp->next=head->next;
    head->next=temp;
    int t=head->data;
    head->data=temp->data;
    temp->data=t;
    }
}
int main(){
    int x=15;
    fuck *head=new fuck(3);
    head->next=new fuck(4);
    head->next->next=new fuck(6);
    head->next->next->next=head;
    insert(head,x);
    print(head);
    return 0;
}
