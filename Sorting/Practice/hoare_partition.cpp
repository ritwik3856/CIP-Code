#include<bits/stdc++.h>
using namespace std;


int  hPartition(int arr[] , int h , int l ){
 int p=arr[l];
 int i=l-1,j=h+1;
 while(true) {
     do{
         i++;
     }while(arr[i]<p);
     do{
         j--;
     }while(arr[j]>p);
     if(i>=j)return j;
     swap(arr[i],arr[j]);
 }
}
int main() {
    int arr[] {5,3,8,4,2,7,1,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    int high=n-1,low=0;
    cout<<hPartition(arr,high,low)<<" ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}