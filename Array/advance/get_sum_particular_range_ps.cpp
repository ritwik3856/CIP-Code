#include<iostream>
using namespace std;

void get_sum_part(int arr[] , int n){
 int prefix_sum[n],l,r;
 prefix_sum[0]=arr[0];
 for(int i=1;i<n;i++)
 prefix_sum[i]=prefix_sum[i-1]+arr[i];
 cout<<"enter the from where "; 
 cin>>l;
 cout<<"to ";
 cin>>r;
 if(l!=0)
 cout<<prefix_sum[r]-prefix_sum[l-1]; //subtraction the prefix sum of from last index to the first index l that 
                                     //that we don't want that is l-1;
 else
 cout<<prefix_sum[r];

}
int main(){
    int arr[]={2,8,3,9,6,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    get_sum_part(arr,n);
    return 0;
}