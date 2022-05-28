#include<iostream>      //array sorted
using namespace std;

int count_1s(int arr[],int n,int s){
   int l=0,h=n-1;
   while(l<=h){
       int mid=(l+h)/2;
       if(arr[mid]==0)
       l=mid+1;
       else{
           if(arr[mid]!=arr[mid-1]) //mid==0 || arr[mid-1]==0 same logic
           return (n-mid);
           else
           h=mid-1;
       }
   }
   return -1;
}
int main(){
    int arr[]={0,0,0,1,1,1,1,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=1;
    cout<<count_1s(arr,n,s);
    return 0;
}