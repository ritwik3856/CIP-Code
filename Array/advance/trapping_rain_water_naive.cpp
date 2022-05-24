#include<iostream>
using namespace std;

void trapping_rain(int arr[] , int n){
   int fill=0;
   for(int i=1;i<n-1;i++){
       int lmax=arr[i];
       for(int j=0;j<i;j++)
       lmax=max(lmax,arr[j]);
       int rmax=arr[i];
       for(int j=i;j<n;j++)
       rmax=max(rmax,arr[j]);
       fill+=(min(lmax,rmax)-arr[i]);
   }
   cout<<fill;
}
int main(){
    int arr[]={3,0,1,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    trapping_rain(arr,n);
    return 0;
}