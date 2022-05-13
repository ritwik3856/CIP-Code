#include<iostream>
using namespace std;

bool power_two(int n ){
  if(n==0)
  return false;
  return (n&(n-1))==0;
}
int main(){
    int n=8;
    cout<<power_two(n);
   
    return 0;
}