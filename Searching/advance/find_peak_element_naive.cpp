#include<iostream>      
using namespace std;

int findpeak(int arr[],int n){
    if(n==1) return arr[0];
    if(arr[0]>=arr[n-1]) return arr[0];
    if(arr[n-1]>=arr[n-2]) return arr[n-1];
    for(int i=1;i<n;i++){
        if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
        return arr[i];
    }
    return -1;
}
int main(){
    int arr[]={5,10,20,15,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<findpeak(arr,n);
    return 0;
}