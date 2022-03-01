#include<bits/stdc++.h>
using namespace std;

int lpartition(int arr[],int h,int l){
    int p=arr[h],idx=l-1;
    for(int i=l;i<=h-1;i++){
        if(arr[i]<p){
            idx++;
            swap(arr[i],arr[idx]);
        }
    }
    swap(arr[idx+1],arr[h]);
    return idx+1;

}
void QuickSort(int arr[],int l,int h){
    if(l<h){
        int p=lpartition(arr,h,l);
        QuickSort(arr,l,p-1);
        QuickSort(arr,p+1,h);
    }
}
int main() {
    int arr[] {8,4,7,9,3,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int high=n-1,low=0;
    QuickSort(arr,low,high);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    return 0;
}