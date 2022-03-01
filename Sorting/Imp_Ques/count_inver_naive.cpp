#include<bits/stdc++.h>
using namespace std;

int count_inver(int arr[],int n){
    int c=0;
   for(int i=0;i<(n-1);i++){
       for(int j=i+1;j<n;j++){
           if(arr[i]>arr[j])
           c++;
       }
   }
   return c;
}

int main() {
    int arr1[]={2,4,1,3,5};
    int n=sizeof(arr1)/sizeof(arr1[0]);
   cout<<count_inver(arr1,n);
    return 0;
}