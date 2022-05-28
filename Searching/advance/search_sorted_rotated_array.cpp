#include<iostream>      
using namespace std;

int sorted_rotated_search(int arr[],int n,int x){
  int l=0,h=n-1;
  while(l<=h){
      int mid=(l+h)/2;
      if(arr[mid]==x)
      return mid;
      if(arr[mid]>arr[l]){
          if(arr[l]<=x && arr[mid]>=x )
          h=mid-1;
          else 
          l=mid+1;
      }
      else {
          if(arr[mid]<=x && arr[h]>=x)
          l=mid+1;
          else 
          h=mid-1;
      }
  }
  return -1;
   
}
int main(){
    int arr[]={10,20,40,60,5,8};
    int x=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sorted_rotated_search(arr,n,x);
    return 0;
}