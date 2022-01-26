#include<bits/stdc++.h>
using namespace std;

bool subsumG(int arr[],int sum,int n) {
    for(int i=0;i<n;i++) {
        int currsum=0;
        for(int j=i;j<n;j++) {
            currsum+=arr[j];
            if(currsum==sum)
            return true;

        }

    }
    return false;
}
int main(){
    int arr[]{5,8,6,13,9,-1};
    int sum=22,n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<subsumG(arr,sum,n);
    return 0;
}