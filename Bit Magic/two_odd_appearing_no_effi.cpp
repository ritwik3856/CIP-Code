#include<iostream>
using namespace std;


int main(){
    int arr[]={3,4,3,4,5,4,4,6,7,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=0,res1=0,res2=0;
    for(int i=0;i<n;i++)
    x=x^arr[i];
    int s=(x & ~(x-1));
    for(int i=0;i<n;i++){
        if(arr[i]&s!=0)
        res1=res1^arr[i];
        else
        res2=res2^arr[i];
    }
    cout<<res1<<" "<<res2;
    return 0;
}