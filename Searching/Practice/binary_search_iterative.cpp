#include<iostream>
using namespace std;

bool binary_search(int arr[],int n,int x) {
    int high=n-1,low=0,mid=0;
    while(high>=low) {
    mid=(high+low)/2;
    if(arr[mid]==x)
    return true;
    if(arr[mid]>x)
    high=mid-1;
    else
    low=mid+1;
    }
    return false;
}
int main(){
    int arr[]{10,20,30,40,50,60},x=20;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<binary_search(arr,n,22);
    return 0;
}