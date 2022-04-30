#include<iostream>
#include<map>
using namespace std;


int main(){
    multimap<int,int>mp;
    mp.insert({10,5});
    mp.insert({50,1});
    mp.insert({10,3}); // it allow to have multiple values at the same key
    mp.insert({20,2});
    for(auto &x:mp)
    cout<<x.first<<" "<<x.second<<endl;
    cout<<endl<<endl;
    auto it=mp.equal_range(2);
    for(auto itr=it.first;itr!=it.second;itr++)
    cout<<itr->first<<" "<<itr->second<<endl;

    return 0;
}