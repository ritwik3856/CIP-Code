#include<iostream>
#include<deque>
using namespace std;


int main(){
    deque<int>dq;
    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_front(0);
    for(int &x:dq)
    cout<<x<<" ";
    cout<<endl;
    cout<<dq.front()<<" "<<dq.back();
    cout<<endl;
    auto it=dq.begin();
    it++;
    dq.insert(it,9);
    dq.pop_back();
    for(int &x:dq)
    cout<<x<<" ";
    cout<<endl;
    cout<<dq.size();
    return 0;
}