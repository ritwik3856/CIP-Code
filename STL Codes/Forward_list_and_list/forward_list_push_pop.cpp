#include<iostream>
#include<forward_list>
using namespace std;

int main(){
    forward_list<int>l{10,20,30};
    l.push_front(3);
    l.push_front(5);
    l.pop_front();
    for(int &x:l)
    cout<<x<<" ";
    return 0;
}