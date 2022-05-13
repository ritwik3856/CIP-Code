#include<iostream>
using namespace std;


int main(){
  int n=5;
  int res;
  int table[256];
  table[0]=0;
  for(int i=1;i<256;i++){
      table[i] = (i&1) + table[i/2];
  }
  res=table[n & 0xff];
  n=n>>8;
  res+=table[n & 0xff];
  n=n>>8;
  res+=table[n & 0xff];
  n=n>>8;
  res+=table[n & 0xff];
  cout<<res;
  return 0;
}