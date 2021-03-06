#include<iostream>
#include<cstring>
using namespace std;

int max_appear(int l[],int r[],int n){
   int arr[1000];

   memset(arr,0,sizeof(arr)); //it added 0 to all the element of array.

   for(int i=0;i<n;i++){
       arr[l[i]]++;
       arr[r[i]+1]--;
   }
   
    int maxm=arr[0],res=0;
    for(int i=1;i<1000;i++){
        arr[i]+=arr[i-1];
        if(maxm<arr[i]){
            maxm=arr[i];
            res=i;
        }
    }
    return res;

}
int main(){
    int l[]={1,2,5,15};
    int r[]={5,8,7,18};
    int n=sizeof(l)/sizeof(l[0]);
    cout<<max_appear(l,r,n);
    return 0;
}