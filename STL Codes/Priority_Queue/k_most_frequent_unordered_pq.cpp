#include<iostream>
#include<queue>
#include<unordered_map>
#include<algorithm>
using namespace std;

struct mycmp{
bool operator()(pair<int,int>p1,pair<int,int>p2){
    if(p1.second==p2.second)
    return p1.first>p2.first;
    else
    return p1.second<p2.second;
}
};

void printkfreq(int arr[],int n , int k){
  unordered_map<int,int>m;
  for(int i=0;i<n;i++)
    m[arr[i]]++;
   priority_queue<pair<int,int>,vector<pair<int,int>>,mycmp>pq(m.begin(),m.end());
    for(int i=0;i<k;i++){
       cout<<pq.top().first<<" ";
       pq.pop();
    }
}
int main(){
    int arr[]={10,5,20,5,10,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
   int k=2;
   printkfreq(arr,n,k);
    return 0;
}