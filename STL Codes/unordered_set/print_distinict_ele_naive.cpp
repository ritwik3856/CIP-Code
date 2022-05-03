#include<iostream>
using namespace std;


int main(){
    int arr[]={4,8,5,8,7,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j])
            {
                flag=true;
                break;
            }
        }
        if(flag==false)
        cout<<arr[i]<<" ";
    }
    return 0;
}