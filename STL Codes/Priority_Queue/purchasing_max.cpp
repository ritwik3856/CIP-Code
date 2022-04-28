#include<iostream>
#include<queue>
#include<vector>
using namespace std;


int printklar(int arr[],int n , int sum){
    int res=0;
    priority_queue<int,vector<int>,greater<int>>pq{arr,arr+n}; 
    while( pq.empty()==false && pq.top()<=sum){
        sum-=pq.top();
        pq.pop();
        res++;
    }
    return res;
}
int main(){
    int arr[]={1,12,5,111,200};
    int n=sizeof(arr)/sizeof(arr[0]);
   int sum=10;
   cout<<printklar(arr,n,sum);
    return 0;
}