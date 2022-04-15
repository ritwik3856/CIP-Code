#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


void printsort(int arr[],int n){
  vector<pair<int,int>>v;
  for(int i=0;i<n;i++)
  v.push_back({arr[i],i});
  sort(v.begin(),v.end());
  for(const auto &x:v)
  cout<<x.first<<" "<<x.second<<endl;
}
int main(){
    int arr[]{20,40,30,10};
    int n=sizeof(arr)/sizeof(arr[0]);
    printsort(arr,n);
    return 0;
}