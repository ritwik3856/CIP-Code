#include<bits/stdc++.h>
using namespace std;

int sublong(int arr[],int n) {
  unordered_map<int,int> s;
  int res=0,sum=0;
  for(int i=0;i<n;i++) {
      if(arr[i]==0)
      sum+=-1;
      else
      sum+=1;
      if(s.find(sum)!=s.end())
        res=max(res,i-s[sum]);
    if(s.find(sum)==s.end())
    s.insert({sum,i});
      
  }
  return res;
}
int main(){
    int arr[]{1,0,1,1,1,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sublong(arr,n);
    return 0;
}