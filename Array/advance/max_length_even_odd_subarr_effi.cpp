#include<iostream>  
using namespace std;
/*
The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array (max_ending_here is used for this).
 And keep track of maximum sum contiguous segment among all positive segments (max_so_far is used for this).
 Each time we get a positive sum compare it with max_so_far and update max_so_far if it is greater than max_so_far 
 */
void max_length_even_odd_sub(int arr[] , int n){
    int res=1,curr=1;
    for(int i=1;i<n;i++){
        if( (arr[i]%2!=0 && arr[i-1]%2==0) || (arr[i]%2==0 && arr[i-1]%2!=0))
        {
            curr++;
            res=max(curr,res);
        }
        else
        curr=1;
    }
    cout<<res;
}
int main(){ // kaden's algorithm used to solve this ..
    int arr[]={2,3,-8,7,-1,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    max_length_even_odd_sub(arr,n);
    return 0;
}