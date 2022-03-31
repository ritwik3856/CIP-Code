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
int main(){
    fuck *head=new fuck(3);
    head->next=new fuck(4);
    head->next->next=new fuck(6);
    head->next->next->next=head;
    print(head);
    return 0;
}
