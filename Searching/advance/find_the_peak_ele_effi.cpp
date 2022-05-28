#include<iostream>      
using namespace std;

int findpeak(int arr[],int n){
  int l=0,h=n-1;
  while(l<=h){
      int mid=(l+h)/2;
      if(mid>0 && arr[mid]<=arr[mid-1])
      h=mid-1;
      else 
      l=mid+1;
      if(mid==0 || arr[mid]>=arr[mid-1] && mid==n-1 || arr[mid]>=arr[mid+1])
      return arr[mid];
  }
  return -1;
}
int main(){
    int arr[]={5,10,20,15,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findpeak(arr,n);
    return 0;
}