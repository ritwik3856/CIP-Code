#include<iostream>
using namespace std;

void remdup(int arr[] , int n) {
    int temp[n],idx=1;
    temp[0]=arr[0];
    for(int i=1;i<n;i++) {
       if(temp[idx-1]!=arr[i]) {
           temp[idx]=arr[i];
           idx++;
       } 
       
    }
    for(int i=0;i<n;i++) {
        arr[i]=temp[i];
    }
    for(int i=0;i<idx;i++) {
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={10,20,20,30,30};
    remdup(arr,5);
    return 0;
}