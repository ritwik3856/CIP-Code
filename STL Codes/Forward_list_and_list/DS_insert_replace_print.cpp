#include<iostream>
#include<list>
#include<algorithm>
#include<vector>
using namespace std;

list<int> l;

void insert(int x){
  l.push_back(x);
}
void print(){
    for(int &x:l)
    cout<<x<<" ";
    cout<<endl;
}
void replace(int x,vector<int>&v){
    auto it=find(l.begin(),l.end(),x);
    if(it==l.end())
    return;
    it=l.erase(it);
    l.insert(it,v.begin(),v.end());
}

int main(){
    insert(3);
    insert(4);
    insert(5);
    insert(10);
    print();
    vector<int>seq{20,30,40};
    replace(10,seq);
    print();
    return 0;
}