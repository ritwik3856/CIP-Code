#include<iostream>
using namespace std;

int subset(int arr[],int sum ,int n ){
    if(n==0)
    {
        return sum==0?1:0;
    }
    return subset(arr,sum-arr[n-1],n-1)+subset(arr,sum,n-1);
}
int main(){
    int arr[]={10,5,2,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=8;
    cout<<subset(arr,sum,n);
    return 0;
}