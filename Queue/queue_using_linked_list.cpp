#include<iostream>
using namespace std;

struct qnode{
    int data;
    qnode *next;
    qnode(int c){
        data=c;
        next=NULL;

    }
};
struct queue{
    int size;
    qnode *front,*rear;
    queue(){
        front=rear=NULL;
        size=0;
    }
    bool isEmpty(){
        return size==0;
    }
    void enque(int x){
    qnode *temp=new qnode(x);
      if(rear==NULL){
      front=rear=temp;
      return ;}
      rear->next=temp;
      rear=temp;
      size++;
    }
    void deque(){
       if(front==NULL)
       return ;
       qnode *temp=front;
       front=front->next;
       if(front==NULL)rear=NULL;
       delete temp;
       size--;
    }
    int getFront(){
        if(isEmpty())
        return -1;
        else
        return front->data;
    }
    int getRear(){
        if(isEmpty())
        return -1;
        else
        return rear->data;
    }
    void print(){
        qnode *curr=front;
        while(curr!=NULL){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
    }
};
int main(){
    queue q;
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.deque();
    q.print();
    return 0;
}