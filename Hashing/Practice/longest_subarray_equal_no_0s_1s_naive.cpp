#include<iostream>
using namespace std;

int sublong(int arr[],int n) {
    int res=0;
    for(int i=0;i<n;i++) {
        int c0=0,c1=0;
        for(int j=i;j<n;j++) {
            if(arr[j]==1)
            c1++;
            else
            c0++;
            if(c1==c0)
            res=max(res,j-i+1);
        }
    }
    return res;
}
int main(){
    int arr[]{1,0,1,1,1,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<sublong(arr,n);
    return 0;
}