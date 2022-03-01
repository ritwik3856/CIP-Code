#include<bits/stdc++.h>
using namespace std;


int  Partition(int arr[] , int h , int l , int p ){
    int temp[h-l+1],idx=0;
    for(int i=l;i<=h;i++){ 
        if(arr[i]<arr[p]){ temp[idx]=arr[i];idx++;}
    }
    for(int i=l;i<=h;i++){
        if(arr[i]==arr[p]){temp[idx]=arr[i];idx++;}
    }
    int res=l+idx-1;
    for(int i=l;i<=h;i++){
        if(arr[i]>arr[p]){temp[idx]=arr[i];idx++;}
    }
    for(int i=l;i<=h;i++)
    arr[i]=temp[i-l];
    return res;
}
int main() {
    int arr[] {5,13,6,9,12,11,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int high=n-1,low=0,pivot=3;
    cout<<Partition(arr,high,low,pivot)<<" ";
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}