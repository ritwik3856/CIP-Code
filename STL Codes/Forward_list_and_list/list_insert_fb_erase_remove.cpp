#include<iostream>
#include<list>
using namespace std;


int main(){
    list<int>l={10,20,30,40,50};
    auto it=l.begin();
    it++;
    it=l.insert(it,15); // insertion done was before the pointer
    l.insert(it,2,7); // it is a pointer 2 is the frequency and 7 will be the data part.
    for(auto &x: l)
    cout<<x<<" ";
    cout<<endl;
    cout<<l.front()<<" "<<l.back();
    cout<<" "<<l.size();
    cout<<endl;
    cout<<"erase and remove function"<<endl;

    list<int>l2={10,20,30,40,20,40};
    auto it1=l2.begin();
    it1=l2.erase(it1); // return the pointer after the erase ones
    l2.remove(40); // remove all instances of 40 from the list
    for(auto x:l2)
    cout<<x<<" ";
    cout<<endl;
    l.merge(l2);
    for(auto x:l)
    cout<<x<<" ";
    cout<<endl;
    for(auto x:l2)
    cout<<x<<" ";
    cout<<endl;
    l.unique(); // it remove the consecutive duplicates 
      for(auto &x:l)
    cout<<x<<" ";
    cout<<endl;
    l.sort();
    l.reverse();
    for(auto &x:l)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}