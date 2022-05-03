#include<iostream>
#include<unordered_set>
using namespace std;


int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(15);
    for(auto it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";
    cout<<endl;
    auto it=s.find(5);
    s.erase(it);
    for(auto x:s)
    cout<<x<<" ";

    return 0;
}