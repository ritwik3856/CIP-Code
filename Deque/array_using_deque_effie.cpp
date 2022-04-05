#include<iostream>
using namespace std;


struct deque{
    int *arr;
    int front,cap,size;
    deque(int c){
        arr=new int[c];
        cap=c;
        front=0;
        size=0;
    }
    bool isEmpty(){
        return size==0;
    }
    bool isFull(){
        return size==cap;
    }
    void deleteFront() {
      if(isEmpty()) return;
        front=(front+1)%cap;
        size--;
    }
    void insertRear(int x) {
       if(isFull()) return;
       int new_rear=(front+size)%cap;
       arr[new_rear]=x;
       size++;
    }
    int getFront(){
       if(isEmpty()) return -1;
        else
        return front;
    }
    void insertFront(int x){
       if(isFull()) return;
       front=(front+cap-1)%cap;
       arr[front]=x;
       size++;
    }
    void deleteRear(){
        if(isEmpty()) return;
        size--;
    }
    int getRear(){
       if(isEmpty())return -1;
       else
       return (front+size-1)%cap;
    }
    void print(){
        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    deque dq(5);
    dq.insertFront(10);
    dq.insertRear(20);
    dq.insertRear(30);
    dq.deleteFront();
    dq.deleteRear();
    dq.print();

}