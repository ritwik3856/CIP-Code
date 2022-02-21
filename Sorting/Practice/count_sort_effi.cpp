#include<bits/stdc++.h>
using namespace std;

void count_sort(int arr[],int n,int k ){
    int count[k];
    for(int i=0;i<k;i++)
    count[i]=0;
    for(int i=0;i<n;i++)
    count[arr[i]]++;
    for(int i=1;i<k;i++)
    count[i]=count[i-1]+count[i];
    int output[n];
    for(int i=0;i<n;i++){
        output[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0;i<n;i++)
    arr[i]=output[i];

}
int main() {
    int arr1[]={1,2,1,0,2,0},k=5;
    int n=sizeof(arr1)/sizeof(arr1[0]);
    count_sort(arr1,n,k);
    for(int i=0;i<n;i++) 
        cout<<arr1[i]<<" ";
    return 0;
}