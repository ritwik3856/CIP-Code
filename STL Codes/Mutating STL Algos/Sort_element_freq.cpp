#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;

bool mycmp(pair<int,int>p1,pair<int,int>p2){
    if(p1.second==p2.second)
    return p1.first<p2.first;
    else
    return p1.second>p2.second;
}
int main(){
    int arr[]={10,5,20,10,10,5,20};
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int>m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;

    vector<pair<int,int>>v{m.begin(),m.end()};
    sort(v.begin(),v.end(),mycmp);

    int i=0;
    for(auto x:v){
        for(int j=0;j<x.second;j++)
        arr[i++]=x.first;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}