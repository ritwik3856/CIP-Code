#include<iostream>
using namespace std;

void majority_ele(int arr[] , int n){
  for(int i=0;i<n;i++){
          int occ=1;
      for(int j=i+1;j<n;j++){
          if(arr[i]==arr[j])
          occ++;
      }
      if(occ>n/2)
      cout<<arr[i];
  }
}
int main(){
    int arr[]={8,3,4,8,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    majority_ele(arr,n);
    return 0;
}