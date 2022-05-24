#include<iostream>
using namespace std;

void max_cons_ones(int arr[] , int n){
  int res=0;
  for(int i=0;i<n;i++){
      int curr=0;
      for(int j=i;j<n;j++){
          if(arr[j]==1)
              curr++;
          else 
          break;
      }
      res=max(res,curr);
  }
  cout<<res;
}
int main(){
    int arr[]={0,1,1,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    max_cons_ones(arr,n);
    return 0;
}