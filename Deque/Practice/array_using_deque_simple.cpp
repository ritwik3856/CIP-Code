#include<iostream>
using namespace std;

struct deque{
    int size,cap;
    int *arr;
    deque(int x){
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
    void insertrear(int x){
        if(isFull())
        return;
        arr[size]=x;
        size++;
    }
    void deleterear(){
        if(isEmpty())
        return ;
        size--;
    }
    int getrear(){
        if(isEmpty())
        return -1;
        return size-1;
    }
    void insertfront(int x){
        if(isFull())
        return;
        for(int i=size-1;i>=0;i--){
            arr[i+1]=arr[i];
        }
        arr[0]=x;
        size++;
    }
    void deletefront(){
        if(isEmpty())
        return;
        for(int i=0;i<size-1;i++)
        arr[i]=arr[i+1];
        size--;
    }
    int getfront(){
        if(isEmpty())
        return -1;
        else
        return 0;
    }
    void print(){
        for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    }
};


int main(){
    deque dq(5);
    dq.insertrear(10);
    dq.insertfront(20);
    dq.insertrear(30);
    dq.insertfront(40);
    dq.deletefront();
    dq.deleterear();
    dq.print();
    return 0;
}