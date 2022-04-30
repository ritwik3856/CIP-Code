#include<iostream>
#include<map>
using namespace std;


int main(){
    int arr[]={2,8,10,5,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    map<int,int>m;
    for(int i=0;i<n;i++)
    m[arr[i]]++;
    int cum_freq=0;
    for(auto it=m.rbegin();it!=m.rend();it++){
        int freq=it->second;
        it->second=cum_freq;
        cum_freq+=freq;
    }
    for(int i=0;i<n;i++)
    cout<<m[arr[i]]<<" ";
    
    return 0;
}