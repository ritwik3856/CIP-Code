#include<iostream>
using namespace std;


int main(){
    int arr[]={4,3,4,4,4,5,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    int res=0;
    for(int i=0;i<n;i++)
    res=res^arr[i];
    cout<<res;
    return 0;
}