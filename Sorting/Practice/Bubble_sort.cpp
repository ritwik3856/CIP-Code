#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n) {
    for(int i=0;i<n-1;i++) {
        int swapped=true;
        for(int j=0;j<n-i-1;j++) {
            if(arr[j]>arr[j+1]) {
            swap(arr[j],arr[j+1]);
            swapped=false;
            }
        }
        if(swapped=false)
        break;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}

int main(){
    int arr[]={2,10,8,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);
    return 0;
}