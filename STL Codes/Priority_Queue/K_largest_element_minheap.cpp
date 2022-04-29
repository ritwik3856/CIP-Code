#include<iostream>
#include<queue>
#include<vector>
using namespace std;


void printklar(int arr[],int n , int k){
    priority_queue<int,vector<int>,greater<int>>pq{arr,arr+k}; //creating a min heap of k largest element that we want
    for(int i=k;i<n;i++){
        if(arr[i]>pq.top()){ // if arr[i] is greater it means smallest element in heap must be removed
            pq.pop(); //removing the smallest element
            pq.push(arr[i]); // pushing the largest element that we get while comparing each time 
        }
    }
    while(!pq.empty()){
       cout<<pq.top()<<" "; // printing all the top.
       pq.pop();
    }
}
int main(){
    int arr[]={5,15,10,20,8,25,18};
    int n=sizeof(arr)/sizeof(arr[0]);
   int k=3;
   printklar(arr,n,k);
    return 0;
}