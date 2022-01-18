#include<iostream>
using namespace std;

int insert(int arr[],int n,int cap,int pos, int x){
    if(n==cap) 
        return n;
        int idx=pos-1;
    for(int i=n-1;i>=idx;i--) 
        arr[i+1]=arr[i];
    arr[idx]=x;
    return n+1;
}
int main(){
    int cap=5,pos,x,res;
    int arr[cap]={5,7,10,20};
    int n=4;
    cin>>x>>pos;
    res=insert(arr,n,cap,pos,x);
     for(int p=0;p<cap;p++)
    cout<<arr[p]<<" ";
   
    return 0;
}