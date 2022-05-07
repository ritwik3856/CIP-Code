#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    vector<int>v1={10,20,40};
    vector<int>v2={5,15,30};
    vector<int>v3(6);
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin());
    for(auto x:v3)
    cout<<x<<" ";
    return 0;
}