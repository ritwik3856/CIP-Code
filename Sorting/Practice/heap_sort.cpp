#include<bits/stdc++.h>
using namespace std;

void maxheap(int arr[],int n,int i) {
    int largest=i,left=2*i+1,right=2*i+2;
    while(left<n && arr[left]>arr[largest])largest=left;
    while(right<n && arr[right]>arr[largest])largest=right;
    if(largest!=i){
        swap(arr[largest],arr[i]);
        maxheap(arr,n,largest);
    }
    }
void buildheap(int arr[],int n){
    for(int i=(n-2)/2;i>=0;i--){
        maxheap(arr,n,i);
    }
}
void heapsort(int arr[], int n){
    buildheap(arr,n);
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        maxheap(arr,i,0);
    }
}
int main() {
    int arr1[]={10,15,50,4,20};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    heapsort(arr1,n);
    for(int i=0;i<n;i++) 
        cout<<arr1[i]<<" ";
    return 0;
}