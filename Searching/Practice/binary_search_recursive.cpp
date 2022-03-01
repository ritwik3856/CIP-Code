#include<iostream>
using namespace std;

int brec(int arr[],int low , int high , int x) {
  
  if(low>high)
  return -1;
  int mid=(high+low)/2;
  if(arr[mid]==x)
  return mid;
  else if(arr[mid]>x)
  return brec(arr,low,mid-1,x);
  else
  return brec(arr,mid+1,high,x);
}

int main(){
    int arr[]{10,20,30,40,50,60},x=20;
    int n=sizeof(arr)/sizeof(arr[0]);
    int high=n-1,low=0;
    cout<<brec(arr,low,high,x);
    return 0;
}