#include<iostream>
#include<algorithm>
using namespace std;


int main(){
  int arr[]={10,15,8,20};
  sort(arr,arr+4);
  for(auto i:arr)
  cout<<i<<" ";
  if(binary_search(arr,arr+4,8))
  cout<<"present";
  else
  cout<<"not present";
  return 0;
}