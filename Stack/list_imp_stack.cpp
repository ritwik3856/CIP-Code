#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }

};
struct mystack{
 node *head;
 int sze;
 mystack(){
     head=NULL;
     sze=0;
 }
 void push(int x){
     node *temp=new node(x);
     temp->next=head;
     head=temp;
     sze++;
 }
 int pop(){
     if(head==NULL)
     return INT_MAX; //underflow
     int res=head->data;
     node *temp=head;
     head=head->next;
     delete temp;
     sze--;
     return res;
 }
 int size(){
     return sze;
 }
 int peek(){
     if(head==NULL)
     return INT_MAX;//underflow
     return (head->data);
}
bool isEmpty(){
    return (head==NULL);
}


};
int main(){
    mystack s;
    s.push(5);
    s.push(10);
    s.push(20);
    cout<<s.pop()<<endl;
    cout<<s.size()<<endl;
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}