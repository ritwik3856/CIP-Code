#include<iostream>
#include<set>
using namespace std;


void print_ceil(int arr[],int n ){
 set<int>s;
 int res[n];
 for(int i=n-1;i>=0;i--){
     auto it=s.lower_bound(arr[i]);
     if(it==s.end())
     res[i]=-1;
     else{
         res[i]=*it;
     }
     s.insert(arr[i]);
 }
  for(int i=0;i<n;i++)
  cout<<res[i]<<" ";
}
int main(){
    int arr[]{10,100,200,30,120,120};
    int n=sizeof(arr)/sizeof(arr[0]);
    print_ceil(arr,n);
    return 0;
}