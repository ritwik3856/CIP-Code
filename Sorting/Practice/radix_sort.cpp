#include<bits/stdc++.h>
using namespace std;

void count_sort(int arr[],int n,int exp ){
   int output[n];
   int count[10]={0};

   for(int i=0;i<n;i++)
   count[(arr[i]/exp)%10]++;

   for(int i=1;i<10;i++)
   count[i]+=count[i-1];

   for(int i=n-1;i>=0;i--){
       output[count[(arr[i]/exp)%10]-1]=arr[i];
       count[(arr[i]/exp)%10]--;
   }
   for(int i=0;i<n;i++)
   arr[i]=output[i];
}

void radix_sort(int arr[],int n ){
    int max=arr[0];
    for(int i=1;i<n;i++)
    if(arr[i]>max)
    max=arr[i];
    for(int exp=1;(max/exp)>0;exp=exp*10)
    count_sort(arr,n,exp);
}

int main() {
    int arr1[]={319,212,6,8,100,50};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    radix_sort(arr1,n);
    for(int i=0;i<n;i++) 
        cout<<arr1[i]<<" ";
    return 0;
}