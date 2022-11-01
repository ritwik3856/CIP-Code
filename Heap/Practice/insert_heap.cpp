#include<iostream>
using namespace std;

class minheap{
    int *arr;
    int size;
    int cap;
    public:
    minheap(int x){
        cap=x;
        size=0;
        arr=new int[x];
    }
    int left(int i){
        return (2*i+1);
    }
    int right(int i){
        return (2*i+2);
    }
    int parent(int i){
        return (i-1/2);
    }
    void insert(int x){
        if(size==cap)
        return ;
        size++;
        arr[size-1]=x;
        for(int i=size-1;i!=0 && arr[parent(i)]>arr[i];){
            swap(arr[i],arr[parent(i)]);
            i=parent(i);
        }
    }
    void pr(){
        for(int i=0;i<size;i++)
        cout<<arr[i]<<" ";
    }
};

int main(){
    minheap h(10);
    h.insert(30);
    h.insert(70);
    h.insert(9);
    h.insert(8);
    h.insert(7);
    h.insert(14);
    h.insert(20);
    h.insert(79);
    h.pr();
    return 0;
}