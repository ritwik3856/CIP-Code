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
int main(){
    Node *head=new Node(30);
    head->next=new Node(40);
    head->next->next=new Node(50);
    return 0;
}