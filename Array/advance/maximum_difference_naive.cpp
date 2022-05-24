#include<iostream>
using namespace std;

void maxdiff_naive(int arr[] , int n){
    int max_=INT_MIN;
  for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
          max_=max(max_,arr[j]-arr[i]);
      }
  }
  cout<<max_;
}
int main(){
    int arr[]={2,3,10,6,4,8,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    maxdiff_naive(arr,n);
    return 0;
}