#include<iostream>
using namespace std;


int power(int x,int n){
 int res=1;
 while(n>0){
     if(n%2!=0) // n&1 for finding the last bit as 1 or not .
     res=res*x;
     x=x*x;
     n=n/2;// n>>1 for dividing the n.
 }
 return res;
}
int main(){
    int x,n;
    cin>>x;
    cin>>n;
    int res=power(x,n);
    cout<<res;
    return 0;
}