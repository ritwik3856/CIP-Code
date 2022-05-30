#include<iostream>
using namespace std;

int majority_ele(int arr[],int n){
    int c=1,res=0;
    for(int i=1;i<n;i++){ //starting with 1 because count is 1. 
        if(arr[res]==arr[i])
        c++;
        else 
        c--;
        if(c==0){ //increasing and decreasing the element no. to get highest count element in the array.
            res=i,c=1;
        }
    }
    c=1;
    for(int i=0;i<n;i++){  //checking if the highest count element in array is actually a majority or not.
        if(arr[res]==arr[i])
            c++;
    }
    if(c>n/2)
    return arr[res];
    return -1;
}
int main(){
    int arr[]={0,2,1,3,2,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<majority_ele(arr,n);
    return 0;
}