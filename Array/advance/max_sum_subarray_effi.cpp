#include<iostream>
using namespace std;

void max_sum_subarray(int arr[] , int n){
int res=arr[0];
int maxEnding=arr[0];
for(int i=1;i<n;i++){
    maxEnding=max(arr[i],maxEnding+arr[i]);
    res=max(res,maxEnding);
}
cout<<res;
}
int main(){
    int arr[]={2,3,-8,7,-1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    max_sum_subarray(arr,n);
    return 0;
}