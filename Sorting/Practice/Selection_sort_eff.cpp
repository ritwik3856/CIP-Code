#include<bits/stdc++.h>
using namespace std;


void Selection_sort(int arr[],int n) {
    for(int i=0;i<n;i++) {
         int  min_idx=i;
        for(int j=i+1;j<n;j++) 
        if(arr[j]<arr[min_idx])
        min_idx=j;
    swap(arr[i],arr[min_idx]);
    }
}
int main() {
    int arr[]={2,1,7,8,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    Selection_sort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}