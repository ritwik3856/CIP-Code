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
    void minheapify(int i){
        int lt=left(i),rt=right(i),smallest=i;
        if(lt<size && arr[lt]<arr[smallest])
        lt=smallest;
        if(rt<size && arr[rt]<arr[smallest])
        rt=smallest;
        if(smallest!=i){
            swap(arr[smallest],arr[i]);
            minheapify(smallest);
        }
    }
    int extract_min(){
        if(size==0)
        return INT_MAX;
        if(size==1){
            size--;
            return arr[0];
        }
        swap(arr[0],arr[size-1]);
        size--;// because heapification not happens to the last node which we want to return 
        minheapify(0);
        return arr[size];
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
    cout<<h.extract_min()<<endl;
    cout<<"after extraction and hefipication  :  ";
    h.print();
    return 0;
}
