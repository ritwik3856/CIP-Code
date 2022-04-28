#include<iostream>
#include<queue>
using namespace std;


int main(){
    int arr[]{5,2,6,8,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>>pq{arr,arr+n};
    for(int i=0;i<n;i++){
    arr[i]=pq.top();
    pq.pop();
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}