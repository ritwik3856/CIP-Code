#include<bits/stdc++.h>
using namespace std;


void MergeSort(int arr1[],int arr2[],int m,int n){
    int b[m+n];
    for(int i=0;i<m;i++)
    b[i]=arr1[i];
    for(int i=0;i<n;i++)
    b[m+i]=arr2[i];
    sort(b,b+m+n);
    for(int i=0;i<m+n;i++)
    cout<<b[i]<<" ";
}
int main() {
    int arr1[]={10,15,20},arr2[]={5,6,6,15};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    MergeSort(arr1,arr2,m,n);
    return 0;
}