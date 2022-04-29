#include<iostream>
#include<set>
using namespace std;


int main(){
    set<int>s;
    s.insert(10);
    s.insert(5);
    s.insert(20);
    auto it=s.lower_bound(25); //if same return same iterator if not then return just greater element iterator 
    if(it!=s.end())
    cout<<*it<<" ";
    else
    cout<<"given element is greater than the greatest element in the set"; // if beyond the greatest in set then end iterator.
    cout<<endl;
    auto it1=s.upper_bound(25);
    cout<<*it1;
    return 0;
}