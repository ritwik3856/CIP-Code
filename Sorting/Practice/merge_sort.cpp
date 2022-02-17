#include<bits/stdc++.h>
using namespace std;

void Merge(int arr[],int l,int m,int r){
    int n1=m-l+1,n2=r-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++) {left[i]=arr[l+i];}
    for(int i=0;i<n2;i++) {right[i]=arr[m+1+i];}
    int i=0,j=0,k=l;
    while(i<n1 && j<n2) {
        if(left[n1]>=right[n2]){ arr[k++]=right[j++];}
        else { arr[k++]=left[i++];}
    }
    while(i<n1){arr[k++]=left[i++];}
    while(j<n2){arr[k++]=right[j++];}
    
}
void MergeSort(int arr[],int l,int r){
    if(r>l){
        int m=(l+r)/2;
        MergeSort(arr,l,m);
        MergeSort(arr,m+1,r);
        Merge(arr,l,m,r);
    }
}
int main() {
    int arr[] {10,5,30,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=0,r=n;
    MergeSort(arr,l,r);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}

