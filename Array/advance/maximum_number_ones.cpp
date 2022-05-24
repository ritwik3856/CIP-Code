#include<iostream>
using namespace std;

void max_cons_ones(int arr[] , int n){
    int res=0,curr=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0)
        curr++;
        else{
        res=max(res,curr);
        curr=0;
        }
}
cout<<res;
}
int main(){
    int arr[]={0,1,1,0,1,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    max_cons_ones(arr,n);
    return 0;
}