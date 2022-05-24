/* equlibrium point is the element after it and before it will be same 
*/

#include<iostream>
using namespace std;

bool equilibrium_point(int arr[] , int n){
    int sum=0;
    for(int i=0;i<n;i++)
    sum+=arr[i];
    int lsum=0;
    for(int i=0;i<n;i++){
        if(lsum==sum-arr[i]){
            return true;
        }
        lsum+=arr[i];
        sum-=arr[i];
    }
    return false;
}
int main(){
    int arr[]={3,4,8,-9,20,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<equilibrium_point(arr,n);
    return 0;
}