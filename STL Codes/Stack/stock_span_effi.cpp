#include<iostream>
#include<stack>
using namespace std;


int main(){
    int arr[]={15,13,12,14,16,8,6,4,10,30};
    int n=sizeof(arr)/sizeof(arr[0]);
   stack<int>s;
   s.push(0);
   for(int i=1;i<n;i++){
       if(s.empty()==false && arr[s.top()]<=arr[i])
       s.pop();
       int span=s.empty()?(i+1):(i-s.top());
       cout<<span<<" ";
       s.push(i);
   }
    return 0;
}