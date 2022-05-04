#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
    vector<int>v{10,20,30,40,50,60};
    if(binary_search(v.begin(),v.end(),20))
    cout<<"found"<<endl;
    else
    cout<<"not found";
    auto it=max_element(v.begin(),v.end());
    auto it2=min_element(v.begin(),v.end());
    cout<<*it<<" "<<*it2<<endl;
    cout<<count(v.begin(),v.end(),20)<<endl;
    vector<int>v1{1,2,3,4,5};
    fill(v1.begin()+2,v1.end()-1,-1);
    for(auto x:v1)
    cout<<x<<" ";
    cout<<endl;
    rotate(v.begin(),v.end()-2,v.end());
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;
    return 0;
}