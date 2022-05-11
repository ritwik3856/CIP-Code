#include<iostream>
using namespace std;


void power(int x,int n){
    int res=1;
  for(int i=1;i<=n;i++)
    res=res*x;
    cout<<res;
}
int main(){
    int x,n;
    cin>>x;
    cin>>n;
    power(x,n);
    return 0;
}