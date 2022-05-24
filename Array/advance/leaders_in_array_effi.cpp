#include<iostream>
using namespace std;

void leaders_naive(int arr[] , int n){
 int temp=arr[n-1];
 cout<<temp<<" ";
 for(int i=n-2;i>=0;i--){
     if(temp<arr[i])
     {
         temp=arr[i];
         cout<<arr[i]<<" ";
     }
 } 
 
}
int main(){
    int arr[]={7,10,4,3,6,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    leaders_naive(arr,n);
    return 0;
}