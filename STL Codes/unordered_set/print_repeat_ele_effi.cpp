#include<iostream>
#include<unordered_set>
using namespace std;


int main(){
    int arr[]={4,8,5,8,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        if(s.find(arr[i])==s.end())
        s.insert(arr[i]);
        else
        cout<<arr[i]<<" ";
    }
    return 0;
}