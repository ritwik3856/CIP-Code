#include<iostream>
using namespace std;

class minheap{
    int *arr;
    int size;
    int cap;
    public:
    minheap(int c){
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
};
int main(){
    minheap h(11);
    return 0;
}
