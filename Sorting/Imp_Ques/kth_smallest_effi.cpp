#include<bits/stdc++.h>
using namespace std;

int l_partition(int arr[],int l,int h){
   int pivot=arr[h];
   int win=l-1;
   for(int i=l;i<=h-1;i++){
       if(arr[i]<pivot){
           swap(arr[i],arr[pivot]);
           win++;
       }
       
   }
   swap(arr[h],arr[win+1]);
    return win+1;
}
int min_diff(int arr[],int n,int k){
  int l=0,h=n-1;
  while(l<=h){
      int p=l_partition(arr,l,h);
      if(p==k-1)
      return arr[p];
      else if(p>k-1)
      h=p-1;
      else
      l=p+1;
  }
  return -1;
}

int main() {
    int arr1[]={30,20,5,10,8},k=4;
    int n=sizeof(arr1)/sizeof(arr1[0]);
   cout<<min_diff(arr1,n,k);
    return 0;
}