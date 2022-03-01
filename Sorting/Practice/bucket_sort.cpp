#include<bits/stdc++.h>
using namespace std;

void bucket_sort(int arr[],int n,int k){
    int mx=arr[0];
    for(int i=1;i<n;i++)
    mx=max(arr[i],mx);
    mx++;
    vector<int> bkt[k];
    for(int i=0;i<n;i++){
        int bi=(k*arr[i])/mx;
        bkt[bi].push_back(arr[i]);
    }
    for(int i=0;i<k;i++)
    sort(bkt[i].begin(),bkt[i].end());

    int idx=0;
    for(int i=0;i<k;i++){
        for(int j=0;j<bkt[i].size();j++)
        arr[idx++]=bkt[i][j];
    }
}

int main() {
    int arr1[]={30,40,10,80,5,12,70},k=4;
    int n=sizeof(arr1)/sizeof(arr1[0]);
    bucket_sort(arr1,n,k);
    for(int i=0;i<n;i++) 
        cout<<arr1[i]<<" ";
    return 0;
}