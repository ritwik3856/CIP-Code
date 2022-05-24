#include<iostream>
using namespace std;

void max_sum_k_consecutive(int arr[] , int n,int k){
   int curr_sum=0,max_sum=0;
   for(int i=0;i<k;i++) // using of window sliding technique to solve this problem 
   curr_sum+=arr[i];
   max_sum=curr_sum;
   for(int i=k;i<n;i++){
       curr_sum+=(arr[i]-arr[i-k]);
       max_sum=max(max_sum,curr_sum);
   }
   cout<<max_sum;

}
int main(){
    int arr[]={1,8,30,-5,20,7},k=3;
    int n=sizeof(arr)/sizeof(arr[0]);
    max_sum_k_consecutive(arr,n,k);
    return 0;
}