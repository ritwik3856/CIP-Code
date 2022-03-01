#include<bits/stdc++.h>
using namespace std;

void freq(int arr[],int n)  {
   unordered_map<int,int>s;
   for(int i=0;i<n;i++) {
       s[arr[i]]++;
   }
       for(auto i:s)
       cout<<i.first<<" "<<i.second<<endl;
   }

int main(){
    int arr[]{10,12,10,15,10,20,12,12};
    int n =sizeof(arr)/sizeof(arr[0]);
    freq(arr,n);
    return 0;
}