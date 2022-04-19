#include<iostream>
#include<stack>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> nxtg(int arr[],int n){
    vector<int>res;
    stack<int>s;
    s.push(arr[n-1]);
    res.push_back(-1);
    for(int i=n-2;i>=0;i--){
        while(s.empty()==false && arr[i]>=s.top())
        s.pop();
        int nxt=s.empty()?-1:s.top();
        res.push_back(nxt);
        s.push(arr[i]);
    }
    reverse(res.begin(),res.end());
    return res;
}
int main(){
    int arr[]={5,15,10,8,6,12,9,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int>res=nxtg(arr,n);
    for(auto it=res.begin();it!=res.end();it++)
    cout<<*it<<" ";
    return 0;
}