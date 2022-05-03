#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    unordered_map<string,int>m;
    string arr[]={"xyz","xyz","pqr","pqr"};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int max_freq=0;
    string winner;
    for(auto &x:m)
    {
        if(x.second>max_freq){
            max_freq=x.second;
            winner=x.first;
        }
        else if(x.second==max_freq && x.first<winner){ //if both team have same vote then lexographically decide win.
            winner=x.first;  //comparing winner must be greater to be win for smaller ones .. 
        }
    }
    cout<<winner;
    return 0;
}