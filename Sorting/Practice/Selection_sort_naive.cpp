#include<bits/stdc++.h>
using namespace std;


void Selection_sort(int arr[],int n) {
    int temp[n];
    for (int i=0;i<n;i++) {
        int min_idx=arr[0];
        for(int j=0;j<n;j++) 
            if(arr[j]<arr[min_idx])
            min_idx=j;
        temp[i]=arr[min_idx];
        arr[min_idx]=INT_MAX;
    }
    for(int i=0;i<n;i++) 
    arr[i]=temp[i];
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