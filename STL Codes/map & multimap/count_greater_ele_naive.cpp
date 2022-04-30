#include<iostream>
using namespace std;


int main(){
    int arr[]={10,5,8,20,30,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    int c;
    for(int i=0;i<n;i++){
        c=0;
        for(int j=0;j<n;j++){
            if(j!=i && arr[j]>arr[i])
            c++;
        }
        cout<<c<<" ";
    }
    return 0;
}