#include<iostream>
#include<unordered_set>
using namespace std;


int main(){
    int arr[]{1,1,1,3,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int d,k=2;
    unordered_set<int>s;
    for(int i=0;i<n;i++)
    s.insert(arr[i]);
    d=s.size();
    if(d>=n/k)
    cout<<n/k;
    else
    cout<<d;
    return 0;
}