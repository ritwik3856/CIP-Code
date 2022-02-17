#include<bits/stdc++.h>
using namespace std;


int  lPartition(int arr[] , int h , int l ){
    int p=arr[h],idx=l-1;
    for(int i=l;i<=h-1;i++) {
        if(arr[i]<p){
            idx++;
            swap(arr[idx],arr[i]);
        }
    }
    swap(arr[idx+1],arr[h]);
    return idx+1;
}
int main() {
    int arr[] {10,80,30,90,40,50,70};
    int n=sizeof(arr)/sizeof(arr[0]);
    int high=n-1,low=0;
    cout<<lPartition(arr,high,low)<<" ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}