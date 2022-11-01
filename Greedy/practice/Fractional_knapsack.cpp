#include<bits/stdc++.h>
using namespace std;


bool compare(pair<int,int>&t1,pair<int,int>&t2){
    double r1=(double)t1.first/t1.second;
    double r2=(double)t2.first/t2.second;

    return r1>r2;
}
int main(){
    vector<pair<int,int>>v={{500,20},{600,50},{400,30}};
    sort(v.begin(),v.end(),compare);
    int kc=70;

    double res=0.0;
    for(int i=0;i<v.size();i++){
        if(v[i].second<kc){
            kc-=v[i].second;
            res+=v[i].first;
        }
        else{
            res+=v[i].first*kc/v[i].second;
        }
    }

    cout<<res;
    return 0;
}