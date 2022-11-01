#include<iostream>
using namespace std;

class heap{
    int cap;
    int size;
    int *arr;
    public:

    heap(int x){
        size=0;
        cap=x;
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
    void insert(int i){
        if(size==cap)
        return;
        size++;
        arr[size-1]=i;
        for(int j=size-1;j!=0 && arr[j]<arr[parent(j)];){
            swap(arr[j],arr[parent(j)]);
            j=parent(j);
        }
    }
    void minheapify(int i){
        int lt=left(i),rt=right(i),smallest=i;
        if(lt<size && arr[lt]<arr[smallest])
        smallest=lt;
        if(rt<size && arr[rt]<arr[smallest])
        smallest=rt;
        if(smallest!=i){
            swap(arr[i],arr[smallest]);
            minheapify(smallest);
        }
    }
    int extract_min(){
        if(size<=0)
            return INT_MAX;
        if(size==1){
            size--;
            return arr[0];
        }
        swap(arr[0],arr[size-1]);
        size--;
        minheapify(0);
        return arr[size];
    }
    void decreasekey(int i,int x){
        arr[i]=x;
        while(i!=0 && arr[i]<arr[parent(i)]){
        swap(arr[i],arr[parent(i)]);
        i=parent(i);
        }
    }
    void del(int i){
        decreasekey(i,INT_MIN);
        extract_min();
    }
    void print(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
    }
};
int main(){
    heap h(11);
    h.insert(20);
    h.insert(5);
    h.del(3);
    h.insert(40);
    h.insert(3);
    h.print();
    return 0;
    
}
