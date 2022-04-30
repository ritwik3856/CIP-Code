#include<iostream>
#include<map>
using namespace std;

// int main(){
//     map<int,string>m;
//     m.insert({5,"gfg"});
//     m.insert({2,"idle"});
//     m.insert({1,"practice"});
//     for(auto it=m.lower_bound(3);it!=m.end();it++)
//     cout<<(*it).second<<" ";
//     cout<<endl;

//     return 0;
// }
int main(){
    map<int,string,greater<int>>m;
    m.insert({5,"gfg"});
    m.insert({2,"idle"});
    m.insert({1,"practice"});
    for(auto it=m.lower_bound(3);it!=m.end();it++)
    cout<<(*it).second<<" ";
    cout<<endl;
    
    return 0;
}