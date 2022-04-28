#include<iostream>
#include<queue>
#include<unordered_map>
#include<algorithm>
using namespace std;



void printkfreq(int arr[],int n , int k){
     unordered_map<int,int>m;
    for(int i=0;i<n;i++)
        m[arr[i]]++;
    vector<int>freq[n+1];
    for(auto x:m){
        freq[x.second].push_back(x.first);
    }
    int c=0;
    for(int i=n;i>=0;i--){
        for(int x:freq[i]){
            cout<<x<<" ";
            c++;
            if(c==k)
            return;
        }
    }
}
int main(){
    int arr[]={10,5,20,5,10,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
   int k=2;
   printkfreq(arr,n,k);
    return 0;
}