#include<iostream>      //array is sorted
using namespace std;

int findocc(int arr[],int l,int h,int s){
    if(l>h)return -1;
    int mid=(l+h)/2;
    if(s>arr[mid])
    return findocc(arr,mid+1,h,s);
    else if(s<arr[mid])
    return findocc(arr,l,mid-1,s);
    else{
        if(mid==0 || arr[mid]!=arr[mid-1])
        return mid;
        else
        return findocc(arr,l,mid-1,s);
    }
    return -1;
}
int main(){
    int arr[]={1,2,10,10,10,20,20,40};
    int h=sizeof(arr)/sizeof(arr[0]);
    int l=0,s=10;
    cout<<findocc(arr,l,h,s);
    return 0;
}