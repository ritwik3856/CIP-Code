#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l ;
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);
    l.push_back(40);
    l.push_back(50);
    for(auto &x:l)
    cout<<x<<" ";
    cout<<endl;
    l.push_front(2);
    l.pop_back();
    for(list<int>::iterator it=l.begin();it!=l.end();it++)
    cout<<*it<<" ";
    return 0;
}