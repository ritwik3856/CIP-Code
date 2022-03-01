#include<iostream>
using namespace std;

int LongSubSum(int arr[],int n,int sum) {
   int res=0;
   for(int i=0;i<n;i++) {
       int curr_sum=0;
       for(int j=i;j<n;j++) {
           curr_sum+=arr[j];
           if(curr_sum==sum)
           res=max(res,j-i+1);
       }

   }
   return res;
}
int main(){
    int arr[]{3,1,0,1,8,2,3,6},sum=5;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<LongSubSum(arr,n,sum);
    return 0;
}