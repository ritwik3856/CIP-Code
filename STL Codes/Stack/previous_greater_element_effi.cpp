#include<iostream>
#include<stack>
using namespace std;

int main(){
    int arr[]={20,30,10,5,15};
    int n=sizeof(arr)/sizeof(arr[0]);
   stack<int>s;
   s.push(arr[0]);
   cout<<-1<<" ";
   for(int i=1;i<n;i++){
       while(s.empty()==false && arr[i]>=s.top())
       s.pop();
       int pg=s.empty()?-1:s.top();
       cout<<pg<<" ";
       s.push(arr[i]);
   }
   return 0;
}