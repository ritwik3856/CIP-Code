#include<iostream>
using namespace std;

void trapping_rain(int arr[] , int n){
 int lmax[n],rmax[n],res=0;
 lmax[0]=arr[0];
 for(int i=1;i<n;i++)
 lmax[i]=max(arr[i],lmax[i-1]);
 rmax[n-1]=rmax[n-1];
 for(int i=n-2;i>=0;i--)
 rmax[i]=max(arr[i],rmax[i+1]);
 for(int i=1;i<n-1;i++)
 res+=(min(rmax[i],lmax[i])-arr[i]);
 cout<<res;
}
int main(){
    int arr[]={3,0,1,2,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    trapping_rain(arr,n);
    return 0;
}