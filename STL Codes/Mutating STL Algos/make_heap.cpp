#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    vector<int>v={15,6,7,12,30};
    //make_heap(v.begin(),v.end()); //making the max heap
    make_heap(v.begin(),v.end(),greater<int>()); //making the min heap
    cout<<v.front()<<endl;
    pop_heap(v.begin(),v.end(),greater<int>()); // poping means replacing the root to the last node 
    cout<<v.front()<<endl;
    v[4]=2; //updating the last node 
    push_heap(v.begin(),v.end(),greater<int>()); // recalibrating the heap
    cout<<v.front()<<endl;
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    sort_heap(v.begin(),v.end());
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}