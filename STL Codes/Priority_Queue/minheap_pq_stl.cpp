#include<iostream>
#include<queue>
using namespace std;


int main(){
    int arr[]{2,3,4,5,6};
    priority_queue<int,vector<int>,greater<int>>pq{arr,arr+5}; // creating a min heap with stl syntax;
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl; //max element in queue or heap 
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    return 0;
}