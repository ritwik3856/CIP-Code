#include<iostream>
using namespace std;

struct queue{
    int size,cap,front;
    int *arr;
    queue(int x){
        size=0;
        cap=x;
        front=0;
        arr=new int[cap];
    }
    bool isEmpty(){
        return size==0;
    }
    bool isFull(){
        return size==cap;
    }
    void enque(int x){
        if(isFull())
        return;
        int rear=getRear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }
    void deque(){
        if(isEmpty()){
            return;
        }
        front=(front+1)%cap;
        size--;
    }
    int getFront(){
        if(isEmpty())
        return -1;
        else
        return front;
    }
    int getRear(){
        if(isEmpty())
        return -1;
        else
        return (front+size-1)%cap;
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    queue q(5);
    q.enque(10);
    q.enque(20);
    q.enque(30);
    q.deque();
    cout<<q.getFront()<<" ";
    cout<<q.getRear()<<" ";
    cout<<q.isEmpty()<<" ";
    cout<<q.isFull()<<" ";
    q.print();
    return 0;
}