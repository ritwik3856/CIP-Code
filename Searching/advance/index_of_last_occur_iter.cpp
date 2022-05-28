#include<iostream>      //array sorted
using namespace std;

int findocc(int arr[],int n,int s){
    int l=0,h=n-1;
    if(l>h) return -1;
    while(l<=h){         //also used first occurance this iter way to solve it 
        int mid=(l+h)/2;
        if(arr[mid]>s)
        h=mid-1;
        else if(arr[mid]<s)
        l=mid+1;
        else {
            if(mid==n-1 || arr[mid]!=arr[mid+1]) // mid==0 & mid-1 can give you first occur only difference in both codes
            return mid;
            else
            l=mid+1;   // h=mid-1 for fist occ
        }  
    }
    return -1;
}
int main(){
    int arr[]={1,2,10,10,10,20,20,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=10;
    cout<<findocc(arr,n,s);
    return 0;
}