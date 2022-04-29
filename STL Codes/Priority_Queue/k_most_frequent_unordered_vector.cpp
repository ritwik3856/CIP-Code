#include<iostream>
#include<queue>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;

bool mycmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.first==p2.first)
    return p1.first<p2.second;
    else
    return p1.second>p2.second;
}

void printkfreq(int arr[],int n , int k){
  unordered_map<int,int>m;
  for(int i=0;i<n;i++)
    m[arr[i]]++;
    vector<pair<int,int>>v(m.begin(),m.end());
    sort(v.begin(),v.end(),mycmp);
    for(int i=0;i<k;i++)
    cout<<v[i].first<<" ";
}
int main(){
    int arr[]={10,5,20,5,10,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
   int k=2;
   printkfreq(arr,n,k);
    return 0;
}