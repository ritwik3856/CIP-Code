#include<bits/stdc++.h>
using namespace std;


void inter_sec(int a[],int b[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && a[i]==a[i-1]){i++;continue;} 
        if(a[i]>b[j])j++;
        else if(a[i]<b[j])i++;
        else {cout<<a[i]<<" ";i++;j++;}
        
    }
}
int main() {
    int arr1[]={3,5,10,10,10,15,15,20},arr2[]={5,10,10,15,30};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    inter_sec(arr1,arr2,m,n);
    return 0;
}