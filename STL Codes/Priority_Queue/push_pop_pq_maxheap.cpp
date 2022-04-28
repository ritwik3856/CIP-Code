#include<iostream>
#include<queue>
using namespace std;


int main(){
    priority_queue<int>pq; // creating a max heap;
    pq.push(10);
    pq.push(3);
    pq.push(5);
    pq.push(6);
    cout<<pq.size()<<endl;
    cout<<pq.top()<<endl; //max element in queue or heap 
    while(pq.empty()==false){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    return 0;
}