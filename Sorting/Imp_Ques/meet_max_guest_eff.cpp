#include<bits/stdc++.h>
using namespace std;


void meet_max(int arr[],int dept[],int m,int n){
       sort(arr,arr+m);
       sort(dept,dept+n);
       int i=1,j=0,res=1,curr=1;
       while(i<m && j<n){
           if(arr[i]<=dept[j]){
               curr++;
               i++;
           }
           else{
               curr--;
               j++;
           }
           res=max(res,curr);
       }
       cout<<res;


}
int main() {
    int arr1[]={900,940,950,1100,1500,1800},dept[]={910,1200,1120,1130,1900,200};
    int m=sizeof(arr1)/sizeof(arr1[0]);
    int n=sizeof(dept)/sizeof(dept[0]);
    meet_max(arr1,dept,m,n);
    return 0;
}