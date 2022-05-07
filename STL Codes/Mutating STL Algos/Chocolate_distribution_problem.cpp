#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int arr[]={7,3,2,4,9,12,56};
    int m=3;
    int s=sizeof(arr)/sizeof(arr[0]);
   if(m>s)
   return -1;
   sort(arr,arr+s);
   int res=arr[m-1]-arr[0];
   for(int i=0;(i+m-1)<s;i++){
       res=min(res,(arr[i+m-1]-arr[i]));
   }
   cout<<res;
    return 0;
}