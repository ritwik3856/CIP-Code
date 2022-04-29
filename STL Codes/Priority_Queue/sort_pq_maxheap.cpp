#include<iostream>
#include<queue>
using namespace std;


int main(){
    int arr[]{5,2,6,8,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    priority_queue<int>pq{arr,arr+n};
    for (int i=n-1;i>=0;i--){
        arr[i]=pq.top(); //traverse the pq then put the maximum element at the end and min at the front.
        pq.pop();
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}