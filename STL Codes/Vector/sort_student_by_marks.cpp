#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
using namespace std;

// int mycmp(pair<int,int>p1,pair<int,int>p2){
//     return p1.second>p2.second;
// }
// void sort_marks(int roll[],int marks[],int n){
//     vector<pair<int,int>>v;
//     for(int i=0;i<n;i++)
//     v.push_back({roll[i],marks[i]});
//     sort(v.begin(),v.end(),mycmp);
//     for(int i=0;i<n;i++)
//     cout<<v[i].first<<" "<<v[i].second<<endl;
// }

void sort_marks(int roll[],int marks[],int n){
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    v.push_back({marks[i],roll[i]});
    sort(v.begin(),v.end(),greater<pair<int,int>>()); //using greater function to reverse the increasing order to decresing order
    for(int i=0;i<n;i++)
    cout<<v[i].second<<" "<<v[i].first<<endl;
}
int main(){
    int roll[]{101,108,103,105},marks[]{70,80,40,90};
    int n=sizeof(roll)/sizeof(roll[0]);
    sort_marks(roll,marks,n);
}