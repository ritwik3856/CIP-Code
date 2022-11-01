#include<bits/stdc++.h>
using namespace std;

bool compare(pair<int,int>&t1,pair<int,int>&t2){
    return t1.second<t2.second;
}
int main(){
    vector<pair<int,int>>v={{1,4},{2,3},{5,8},{6,10}};
    sort(v.begin(),v.end(),compare);
    
    int cnt=1;
    int prev=0;
    for(int curr=1;curr<v.size();curr++){
        if(v[curr].first>v[prev].second){
            prev=curr;
            cnt++;
        }
    }

    cout<<cnt;


    return 0;
}