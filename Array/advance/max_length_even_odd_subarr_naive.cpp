#include<iostream>
using namespace std;

void max_length_even_odd_sub(int arr[] , int n){
   int res=1;
   for(int i=0;i<n;i++){
       int curr=1;
       for(int j=i;j<n;j++){
           if(arr[j]%2==0 && arr[j-1]%2!=0 || arr[j]%2!=0 && arr[j-1]%2==0)
           curr++;
           else 
           break;
       }
       res=max(res,curr);
   }
   cout<<res;
}
int main(){
    int arr[]={2,3,-8,7,-1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    max_length_even_odd_sub(arr,n);
    return 0;
}