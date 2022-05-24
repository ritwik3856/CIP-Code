#include<iostream>
using namespace std;

int max_normal(int arr[],int n){
   int res=0,maxEnd=arr[0];
   for(int i=1;i<n;i++){
       maxEnd=max(arr[i],maxEnd+arr[i]);
       res=max(res,maxEnd);
   }
   return res;
}
void max_cir_sum_subarray(int arr[] , int n){
    int res=0;
    int nor_sum=max_normal(arr,n);
    if(nor_sum<0)
    cout<<nor_sum;
    int arr_sum=0;
    for(int i=0;i<n;i++){
        arr_sum+=arr[i];
        arr[i]=-arr[i];
    }
    int cir_sum=arr_sum+max_normal(arr,n);
    res=max(cir_sum,nor_sum);

   cout<<res;
}
int main(){
    int arr[]={3,-4,5,6,-8,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    max_cir_sum_subarray(arr,n);
    return 0;
}