#include<bits/stdc++.h>
using namespace std;

void two_types_sort(int arr[],int n){
   int temp[n],k=0;
   for(int i=0;i<n;i++){
       if(arr[i]<0){
           temp[k++]=arr[i];
       }
   }
   for(int j=0;j<n;j++){
       if(arr[j]>0){
           temp[k++]=arr[j];
       }
   }
   for(int i=0;i<n;i++)
   arr[i]=temp[i];

   for(int i=0;i<n;i++)
   cout<<arr[i]<<" ";
}

int main() {
    int arr1[]={15,-2,-3,18};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    two_types_sort(arr1,n);
    return 0;
}