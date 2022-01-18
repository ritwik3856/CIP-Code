#include<iostream>
using namespace std;

int del(int arr[],int n,int x){
    int i;
    for(i=0;i<n;i++)
    if(arr[i]==x)
    break;
    if(i==n)
    return n;
    for(int j=i;j<n-1;j++) 
        arr[j]=arr[j+1];
        arr[n-1]=0;
       
    return n-1;
    
}
int main(){
    int arr[]{3,8,12,5,6},res,x;
    int n=sizeof(arr)/sizeof(arr[0]);
    cin>>x;
    res=del(arr,n,x);
     for(int p=0;p<n;p++) 
        cout<<arr[p]<<" ";
    return 0;
}