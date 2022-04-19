#include<iostream>
#include<forward_list>
#include<algorithm>
using namespace std;

int main(){
    forward_list<int>l{15,20,30,88,99,33};
    auto it=l.insert_after(l.begin(),10);
    it=l.insert_after(it,{2,3,5});
    it=l.emplace_after(it,40);//works same as insert little bit changes .
    it=l.erase_after(it); //earses after the pointer and return after the erased item pointer
    for(int &i:l)
    cout<<i<<" ";
    cout<<endl;

    it=l.erase_after(it,l.end());//earse after the pointers.
    for(auto &i:l)
    cout<<i<<" ";
    cout<<endl;

    forward_list<int>l3{5,6,7};
    l.merge(l3); //merge the l3 to l which passes as argument.
    for(auto &i:l)
    cout<<i<<" ";
    cout<<endl; 

    sort(l.begin(),l.end());
    for(auto &i:l)
    cout<<i<<" ";
    return 0;
}