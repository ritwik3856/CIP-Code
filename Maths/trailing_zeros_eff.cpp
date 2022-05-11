#include<iostream>
using namespace std;

int trail_zeros(int n){
  int res=0;
  for(int i=5;i<=n;i=i*5)
  res=res+n/i;
  return res;
}
int main(){
    int n;
    cin>>n;
    cout<<trail_zeros(n);
    return 0;
}