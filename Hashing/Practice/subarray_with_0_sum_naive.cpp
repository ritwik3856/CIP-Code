#include<iostream>
using namespace std;

bool subsum(int arr[],int n) {
    
    for(int i=0;i<n;i++) {
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            if(sum==0)
            return true;
        }
     
    }
    return false;
}
int main(){
    int arr[]{1,4,13,-3,-10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<subsum(arr,n);
    return 0;
}