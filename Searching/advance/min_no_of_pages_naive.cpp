#include<iostream>
using namespace std;

int sum(int arr[],int b,int e){
    int sum=0;
    for(int i=b;i<=e;i++)
    sum+=arr[i];
    return sum;
}
int minPages(int arr[],int n,int k){
   if(k==1) //if no. of student is one.
   return sum(arr,0,n-1);
   if(n==1)
   return arr[0];  //if no. of books is one .
   int res=INT_MAX;
   for(int i=1;i<n;i++){ //i assembles no. of cuts.
       res=min(res,max(minPages(arr,i,k-1),sum(arr,i,n-1))); //we need to maximise the minimum so we take max then min.
   }
   return res;
}
int main(){
    int arr[]={10,20,30,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=2;
    cout<<minPages(arr,n,k);
    return 0;
}