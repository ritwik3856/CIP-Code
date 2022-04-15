#include<iostream>
using namespace std;

class heap{
    int *arr;
    int size;
    int cap;
    public:
    heap(int c){
        cap=c;
        size=0;
        arr=new int[c];
    }
    int right(int i){
        return (2*i+1);
    }
    int left(int i){
        return (2*i+2);
    }
    int parent(int i){
        return(i-1)/2;
    }
    void insert(int x){
        if(size==cap)
        return;
        size++;
        arr[size-1]=x;
        for(int i=size-1;i!=0 && arr[parent(i)]>arr[i];){
            swap(arr[parent(i)],arr[i]);
            i=parent(i);
        }
    }
    void decreasekey(int i,int x){
        arr[i]=x;
        while(i!=0 && arr[parent(i)]>arr[i]){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
   
    void print(){
        for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    }

};
int main(){
    heap h(11);
    h.insert(40);
    h.insert(20);
    h.insert(30);
    h.insert(35);
    h.insert(25);
    h.insert(80);
    h.decreasekey(25,5);
    h.print();
    return 0;
}
