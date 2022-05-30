#include<iostream>
using namespace std;

bool checkpair(int arr[],int l,int h,int x){
     while(l<h){
       if(arr[l]+arr[h]==x){
           return true;
       }
       else if(arr[l]+arr[h]>x)
       h--; //if greater then decrease the high to get smaller value
       else
       l++; // if smaller then increase the low to get higher value
   }
   return false;
}
int main(){
    int arr[]={2,5,8,12,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int l=0,h=n-1;
    int x=17;
    cout<<checkpair(arr,l,h,x);
    return 0;
}