#include<bits/stdc++.h>
using namespace std;

int hpartition(int arr[],int l,int h) {
    int p=arr[l];
    int i=l-1,j=h+1;
    while(true){
        do{
            i++;
        }while(arr[i]<p);
        do{
            j--;
        }while(arr[j]>p);
        if(i>=j) return j;
        swap(arr[i],arr[j]);
    }
}
void QuickSort(int arr[],int l,int h){
    if(h>l){
        int p=hpartition(arr,l,h);
        QuickSort(arr,l,p);
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