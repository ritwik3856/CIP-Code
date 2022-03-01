#include<bits/stdc++.h>
using namespace std;


void Merge(int arr[] , int n , int high , int low , int mid ){
    int size1=mid-low+1,size2=high-mid;
    int left[size1],right[size2];
    for(int i=0;i<size1;i++){left[i]=arr[low+i];}
    for(int i=0;i<size2;i++){right[i]=arr[mid+1+i];}
    int i=0,j=0,k=0;
    while(i<size1 && j<size2){
        if(right[j]>=left[i]){arr[k]=left[i];i++;k++;}
        else
        { arr[k]=right[j];j++;k++;}
    }
    while(i<size1){ arr[k]=left[i];i++;k++;}
    while(j<size2){ arr[k]=right[j];j++;k++;}
    }
int main() {
    int arr[] {10,15,20,11,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int high=4,low=0,mid=2;
    Merge(arr,n,high,low,mid);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}