#include<bits/stdc++.h>
using namespace std;


void union_sec(int a[],int b[],int m,int n){
   int c[m+n];
   for(int i=0;i<m;i++)
       c[i]=a[i];
    for(int j=0;j<n;j++)
        c[m+j]=b[j];
    sort(c,c+m+n);
    for(int i=0;i<m+n;i++){
        if(i==0 || c[i]!=c[i-1])
        cout<<c[i]<<" ";
    }
}
int main() {
    int arr1[]={3,5,8},arr2[]={2,8,9,10,15};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    union_sec(arr1,arr2,m,n);
    return 0;
}