#include<iostream>
using namespace std;

int firstocc(int arr[],int n,int s){
    int l=0,h=n-1;
    if(l>h) return -1;
    while(l<=h){         
        int mid=(l+h)/2;
        if(arr[mid]>s)
        h=mid-1;
        else if(arr[mid]<s)
        l=mid+1;
        else {
            if(mid==0 || arr[mid]!=arr[mid-1]) 
            return mid;
            else
           h=mid-1;
        }  
    }
    return -1;
}
int lastocc(int arr[],int n,int s){
    int l=0,h=n-1;
    if(l>h) return -1;
    while(l<=h){         
        int mid=(l+h)/2;
        if(arr[mid]>s)
        h=mid-1;
        else if(arr[mid]<s)
        l=mid+1;
        else {
            if(mid==n-1 || arr[mid]!=arr[mid+1]) 
            return mid;
            else
            l=mid+1;
        }  
    }
    return -1;
}
int main(){
    int arr[]={10,20,20,20,30,30};
    int x=20;
    int n=sizeof(arr)/sizeof(arr[0]);
    int fo=firstocc(arr,n,x);
    if(fo==-1)
    return 0;
    int lc=lastocc(arr,n,x);
    int countocc=lc-fo+1;
    cout<<countocc;

    return 0;
}