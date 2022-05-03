#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    unordered_map<string,int>m; //key value pair of hash table
    m.insert({"gfg",20});
    m["course"]=15;
    m["idle"]=30;
    for(auto x:m)
    cout<<x.first<<" "<<x.second<<endl;
    if(m.find("gfg")!=m.end())
    cout<<"founded"<<endl;
    else
    cout<<"not founded"<<endl;
    m.erase("course");
    cout<<endl;
    for(auto it=m.begin();it!=m.end();it++)
    cout<<(*it).first<<" "<<(*it).second<<endl;
    return 0;
}