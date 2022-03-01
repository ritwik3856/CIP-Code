#include<bits/stdc++.h>
using namespace std;


void Selection_sort(int arr[],int n) {
   for(int i=0;i<n;i++) {
       int min_ind=i;
       for(int j=i+1;j<n;j++)
       if(arr[j]<arr[min_ind])
       min_ind=j;
       swap(arr[min_ind],arr[i]);
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