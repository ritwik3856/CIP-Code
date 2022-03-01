#include<bits/stdc++.h>
using namespace std;

void two_types_sort(int arr[],int n){
   int i=-1,j=n;
   while(true){
       do{
           i++;
       }while(arr[i]<0);
       do{
           j--;
       }while(arr[j]>0);
       if(i>=j)return ;
       swap(arr[i],arr[j]);
   }
}

int main() {
    int arr1[]={15,-2,-3,18};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    two_types_sort(arr1,n);
    for(int i=0;i<n;i++)
    cout<<arr1[i]<<" ";
    return 0;
}