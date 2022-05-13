#include<iostream>
using namespace std;


int main(){
    int arr[]={4,3,4,4,4,5,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int c=0;
        for(int j=0;j<n;j++)
        if(arr[i]==arr[j])
        c++;
        if(c%2!=0)
        cout<<arr[i];
    }
    return 0;
}