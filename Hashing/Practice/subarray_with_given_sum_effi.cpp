#include<bits/stdc++.h>
using namespace std;

bool subsumG(int arr[],int sum,int n) {
    unordered_set<int>s;
    int presum=0;
    for(int i=0;i<n;i++) {
        presum+=arr[i];
        if(s.find(presum-sum)!=s.end()){
                return true;
        }
        if(presum==sum)
        return true;
        s.insert(presum);
    }
    return false;
}
int main(){
    int arr[]{5,8,6,13,3,-1};
    int sum=22,n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<subsumG(arr,sum,n);
    return 0;
}