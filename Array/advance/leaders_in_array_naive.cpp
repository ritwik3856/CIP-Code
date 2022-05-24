#include<iostream>
using namespace std;

void leaders_naive(int arr[] , int n){
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=i+1;j<n;j++){
            if(arr[i]<=arr[j]){
                flag=false;
            }
        }
        if(flag==true)
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={7,10,4,3,6,5,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    leaders_naive(arr,n);
    return 0;
}