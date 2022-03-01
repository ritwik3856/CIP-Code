#include<bits/stdc++.h>
using namespace std;


void MergeSort(int arr1[],int arr2[],int m,int n){
    int i=0,j=0;
    while(i<m && j<n) {
    if(arr1[i]>arr2[j])
    {cout<<arr2[j]<<" ";j++;}
    else
    {cout<<arr1[i]<<" ";i++;}
    }
    while(i<m)
    {cout<<arr1[i]<<" ";i++;}
    while(j<n)
    {cout<<arr2[j]<<" ";j++;}
}
int main() {
    int arr1[]={10,15,20},arr2[]={5,6,6,15};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(arr2)/sizeof(arr2[0]);
    MergeSort(arr1,arr2,m,n);
    return 0;
}