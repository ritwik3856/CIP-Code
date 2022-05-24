#include<iostream>
using namespace std;

void sub_arr_given_sum(int arr[] , int n , int sum ){
    int curr_sum=arr[0],s=0; //not work for negative integers..
    for(int i=1;i<n;i++){

        while(curr_sum>sum && s<(n-1)){
            curr_sum-=arr[s];
            s++;
        }
        if(curr_sum<sum)
        curr_sum+=arr[i];
       
    }
    if(curr_sum==sum)
    cout<<"Yes";
    else
    cout<<"No";
}
int main(){
    int arr[]={1,4,20,3,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=33;
    sub_arr_given_sum(arr,n,sum);
    return 0;
}