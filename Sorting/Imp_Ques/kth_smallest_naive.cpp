#include<bits/stdc++.h>
using namespace std;

int min_diff(int arr[],int n,int k){
   sort(arr,arr+n);
   return arr[k-1];
}

int main() {
    int arr1[]={1,8,12,5,18},k=3;
    int n=sizeof(arr1)/sizeof(arr1[0]);
   cout<<min_diff(arr1,n,k);
    return 0;
}