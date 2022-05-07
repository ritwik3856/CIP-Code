#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int arr[]={3,7,2,5,12,30};
    int k=3;
    int res=0;
   sort(arr,arr+6,greater<int>());
   for(int i=0;i<k;i++)
   res+=arr[i];
   cout<<res;
    return 0;
}