#include<bits/stdc++.h>
using namespace std;

void three_type_sort(int arr[],int n){
    int temp[n],k=0;
    for(int i=0;i<n;i++)
    if(arr[i]==0){
        temp[k++]=arr[i];
    }
    for(int i=0;i<n;i++)
    if(arr[i]==1){
        temp[k++]=arr[i];
    }
    for(int i=0;i<n;i++)
    if(arr[i]==2){
        temp[k++]=arr[i];
    }
    for(int i=0;i<n;i++)
    arr[i]=temp[i];
}

int main() {
    int arr1[]={0,1,1,2,0,1};
    int n=sizeof(arr1)/sizeof(arr1[0]);
   three_type_sort(arr1,n);
   for(int x:arr1)
   cout<<x<<" ";
    return 0;
}