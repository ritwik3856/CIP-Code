#include<bits/stdc++.h>
using namespace std;


void union_sec(int a[],int b[],int m,int n){
  int i=0,j=0;
  while(i<m && j<n ) {
      if(i>0 && a[i]==a[i-1]){i++; continue; }
      if(j>0 && b[j]==b[j-1]){j++; continue; }
      if(a[i]>b[j]){cout<<b[j]<<" ";j++;}
      else if (a[i]<b[j]){cout<<a[i]<<" ";i++;}
      else {cout<<a[i]<<" ";i++;j++;}
  }
  while(i<m){
      if(i>0 && a[i]==a[i-1]){i++; continue; }
      cout<<a[i]<<" ";i++;
  }
   while(j<n){
      if(j>0 && b[j]==b[j-1]){j++; continue; }
      cout<<b[j]<<" ";j++;
  }
}
int main() {
    int arr1[]={3,5,8},arr2[]={2,8,9,10,15};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    union_sec(arr1,arr2,m,n);
    return 0;
}