#include<iostream>
using namespace std;

bool ispair(int arr[],int l,int h,int x){
    while(l<h){
        if(arr[l]+arr[h]==x)
        return true;
        else if(arr[l]+arr[h]>x)
        h--;
        else 
        l++;
    }
    return false;
}
int main(){
    int arr[]={2,3,4,8,9,20,40};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=32;
   for(int i=0;i<n;i++)
        if(ispair(arr,i+1,n-1,x-arr[i])){ //we are doing i+1 as because we fix the one element of the array 
        cout<<"yes";                      //and searching for the rest two element which complete the sum equal to x.
        return 0;
        }
        
   cout<<"no";
    return 0;
}