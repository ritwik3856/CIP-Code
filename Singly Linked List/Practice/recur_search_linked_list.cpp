#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
int RecSearch(node *head , int s){
    if(head==NULL)
    return -1;
    if(head->data==s)
    return 1;
    else{
    int res=RecSearch(head->next,s);
    if(res==-1)return -1;
    else return (res+1);
    }
} 
int  main(){
    int s=43,pos=1;
    node *head=new node(23);
    head->next=new node(11);
    head->next->next=new node(65);
    head->next->next=new node(43);
    cout<<RecSearch(head,s);
}