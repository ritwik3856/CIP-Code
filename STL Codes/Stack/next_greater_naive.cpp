#include<iostream>
#include<stack>
using namespace std;


int main(){
     int arr[]={5,15,10,8,6,12,9,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        int j;
        for(j=i+1;j<n;j++){
            if(arr[j]>arr[i])
            {
                cout<<arr[j]<<" ";
                break;
            }
        }
        if(j==n)
        cout<<-1<<" ";
    }
    return 0;
}