#include<iostream>
using namespace std;

int countdis(int arr[],int n) {
 int res=0;
 for(int i=0;i<n;i++) {
     bool flag=false;
     for(int j=0;j<i;j++) {
         if(arr[i]==arr[j])
         {
             flag=true;
             break;
         }

     }
     if(flag==false)
     res++;
 }
 return res;
}
int main(){
    int arr[]{15,12,13,12,13,13,18};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<countdis(arr,n);
    return 0;
}