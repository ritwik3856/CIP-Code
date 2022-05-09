#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int a[]={3,20,40};
    int b[]={2,10,12};  //not using the heap because they are sorted.
    int n=3,m=3;

    for(int i=0;i<m;i++){
        if(a[i]>b[0]){
            pop_heap(b,b+3,greater<int>());
            swap(a[i],b[n-1]);
            push_heap(b,b+3,greater<int>());
        }
    }
    sort(b,b+3); //also used the sort_heap function
    for(int i=0;i<m;i++)
    cout<<a[i]<<" ";

    cout<<endl;

    for(int i=0;i<m;i++)
    cout<<b[i]<<" ";
    return 0;
}