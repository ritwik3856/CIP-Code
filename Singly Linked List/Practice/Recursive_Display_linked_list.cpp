#include<iostream>
using namespace std;


struct Node{
    int data;
    Node *next;
    Node (int x){
        data=x;
        next=NULL;
    }
};
void printRecur(Node *head){
  if(head==NULL)
    return ;
    else {
        cout<<head->data<<" ";
        return printRecur(head->next);
    }
}
int main(){
    Node *head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    printRecur(head);
}
