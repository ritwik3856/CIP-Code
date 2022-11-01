#include<bits/stdc++.h>
using namespace std;


bool compare(pair<int,int>&t1,pair<int,int>&t2){
    return t1.second>t2.second;
}
int main(){
    vector<pair<int,int>>v={{1,50},{2,10},{1,20},{2,100},{3,30}};
    sort(v.begin(),v.end(),compare);
    int job=3;
    int res=0;
    for(int i=0;i<v.size();i++){
        if(v[i].first<=job){
            res++;
            job--;
        }
    }
    cout<<res;

    
    return 0;
}