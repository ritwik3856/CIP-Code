#include<iostream>
#include<set>
using namespace std;


int main(){
    //set<int>s for default increasing order of view
    set<int,greater<int>>s; //for decreasing order of view
    s.insert(10);
    s.insert(5);
    s.insert(5); // not take duplicate values.
    s.insert(20);
    for(int x:s)
    cout<<x<<" ";
    cout<<endl;
    auto it=s.find(3); 
    if(it!=s.end()) // if not found the item it will return end iterator
    cout<<*it;
    else 
    cout<<"not found";
    cout<<endl;
    if(s.count(5))
    cout<<"found";
    cout<<endl;
    auto it1=s.begin();
    it1++;
    s.erase(it1,s.end()); // erase all the item from start pointer till before end pointer
    for(int x:s)
    cout<<x<<" ";
    return 0;
}