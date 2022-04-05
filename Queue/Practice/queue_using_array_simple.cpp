#include<iostream>
using namespace std;

struct queue{
    int size,cap;
    int *arr;
    queue(int x){
        size=0;
        cap=x;
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
        arr[size]=x;
        size++;
    }
    void deque(){
        if(isEmpty()){
            return;
        }
        for(int i=0;i<size-1;i++)
        arr[i]=arr[i+1];
        size--;
    }
    int getFront(){
        if(isEmpty())
        return -1;
        else
        return 0;
    }
    int getRear(){
        if(isEmpty())
        return -1;
        else
        return size-1;
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