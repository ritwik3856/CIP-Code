#include<bits/stdc++.h>
using namespace std;

int LongSubSum(int arr[],int n,int sum) {
 unordered_map<int,int>s;
 int presum=0,res=0;
 for(int i=0;i<n;i++) {
     presum+=arr[i];
     if(presum==sum)res=i+1;
     if(s.find(presum)==s.end())
     s.insert({presum,i});
     if(s.find(presum-sum)!=s.end())
     res=max(res,i-s[presum-sum]);
 }
 return res;
}
int main(){
    int arr[]{3,1,0,1,8,2,3,6},sum=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<LongSubSum(arr,n,sum);
    return 0;
}