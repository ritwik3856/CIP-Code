#include<bits/stdc++.h>
using namespace std;

int min_diff(int arr[],int n){
    int res=INT_MAX;
   sort(arr,arr+n);
   for(int i=1;i<n;i++){
       res=min(res,(arr[i]-arr[i-1]));
   }
   return res;
}

int main() {
    int arr1[]={1,8,12,5,18};
    int n=sizeof(arr1)/sizeof(arr1[0]);
   cout<<min_diff(arr1,n);
    return 0;
}