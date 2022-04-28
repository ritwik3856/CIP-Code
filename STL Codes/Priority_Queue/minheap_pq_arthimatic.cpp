#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int main(){
    int arr[]={2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    arr[i]=-arr[i];// for min heap
    priority_queue<int>pq{arr,arr+n}; // creating a min heap without the stl syntax;
    while(pq.empty()==false){
        cout<<(-pq.top())<<" ";//for min heap
        pq.pop();
    }
    return 0;
}