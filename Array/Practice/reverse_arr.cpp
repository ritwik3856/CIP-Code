#include<iostream>
using namespace std;

void reverse(int arr[],int n) {
    int high=n-1,low=0;
    while(high>low) {
        int temp;
        temp=arr[high];
        arr[high]=arr[low];
        arr[low]=temp;
        high--;
        low++;
    }
}
int main(){
    int arr[]={10,5,7,30};
    int n =sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);
     for(int i=0;i<4;i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}