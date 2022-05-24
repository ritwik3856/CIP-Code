#include<iostream>
using namespace std;

void maxdiff_effi(int arr[] , int n){
 int res=arr[1]-arr[0],minval=arr[0];
 for(int j=1;j<n;j++){
     res=max(res,arr[j]-minval);
     minval=min(minval,arr[j]);
 }
 cout<<res;
}
int main(){
    int arr[]={2,3,10,6,4,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxdiff_effi(arr,n);
    return 0;
}