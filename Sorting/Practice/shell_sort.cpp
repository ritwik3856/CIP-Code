#include<bits/stdc++.h>
using namespace std;

void shell_sort(int arr[],int n){
    for(int gap=n/2;gap>=1;gap/=2){
        for(int j=gap;j<n;j++){
            for(int i=j-gap;i>=0;i-=gap){
                if(arr[i+gap]>arr[i])
                break;
                else{
                    swap(arr[i],arr[i+gap]);
                }
            }
        }
    }
}

int main() {
    int arr1[]={319,212,6,8,100,50};
    int n=sizeof(arr1)/sizeof(arr1[0]);
    shell_sort(arr1,n);
    for(int i=0;i<n;i++) 
        cout<<arr1[i]<<" ";
    return 0;
}