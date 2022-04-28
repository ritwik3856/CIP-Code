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
     for(int i=0;i<n;i++){
         int f=m[arr[i]];
         if(f!=-1){
             freq[f].push_back(arr[i]);
             m[arr[i]]=-1;
         }
    }
    int c=0;
    for(int i=n;i>=0;i--){
        for(auto x:freq[i]){
            cout<<x<<" ";
            c++;
            if(c==k)
            return ;
        }
    }

}
int main(){
    int arr[]={10,40,40,10};
    int n=sizeof(arr)/sizeof(arr[0]);
   int k=2;
   printkfreq(arr,n,k);
    return 0;
}