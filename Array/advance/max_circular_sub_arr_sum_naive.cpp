#include<iostream>
using namespace std;

void max_cir_sub_arr_sum(int arr[] , int n){
    int res=arr[0];
    for(int i=0;i<n;i++){
        int curr_sum=arr[i];         //curr_sum=0;
        int curr_max=arr[i];         //curr_max=0;
        for(int j=1;j<n;j++){        //j=0  you can use this to solve it .
            int idx=(i+j)%n;         //in this j=1 and curr_sum , curr_max=arr[i] imp becase if j=0 then it count the curr_max and curr_sum once again.
            curr_sum+=arr[idx];
            curr_max=max(curr_sum,curr_max);
        }
        res=max(res,curr_max);
    }
    cout<<res;
}
int main(){
    int arr[]={3,-4,5,6,-8,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    max_cir_sub_arr_sum(arr,n);
    return 0;
}