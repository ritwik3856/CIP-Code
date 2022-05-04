#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    vector<int>v{5,6,8,10,12};
    vector<int>v1{5,6,8,10,12};
    auto it=find(v.begin(),v.end(),12);
    if(it!=v.end())
    cout<<"found"<<endl;
    else
    cout<<"not found"<<endl;
    auto it1=lower_bound(v.begin(),v.end(),8);
    cout<<*it1<<endl;
    auto it2=upper_bound(v.begin(),v.end(),10);
    cout<<*it2<<endl;
    if(it2!=v.begin() && *(it2-1)==10){
        cout<<"found"<<endl;
    }
    if(is_permutation(v.begin(),v.end(),v1.begin()))
    cout<<"duplicates";
    else
    cout<<"different";
    return 0;
}