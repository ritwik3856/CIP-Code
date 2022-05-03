#include<iostream>
#include<map>
using namespace std;


int main(){
    multimap<int,int>mp;
    mp.insert({10,5});
    mp.insert({50,1});
    mp.insert({20,3}); // it allow to have multiple values at the same key    
    mp.insert({20,2});
    for(auto &x:mp)
    cout<<x.first<<" "<<x.second<<endl;
    cout<<endl<<endl;                                              //   10     5
    auto it=mp.equal_range(20); // return lower and upper bound    //   20     3 ------->lower bound
    for(auto itr=it.first;itr!=it.second;itr++)                    //   20     2
    cout<<itr->first<<" "<<itr->second<<endl;                      //   50     1 ------>upper bound 

    return 0;
}