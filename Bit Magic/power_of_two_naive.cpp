#include<iostream>
using namespace std;

bool power_two(int n ){
   if(n==0)
   return false;
   while(n!=1){
       if(n%2!=0)
       return false;
       n=n/2;
   }
   return true;
}
int main(){
    int n=8;
    cout<<power_two(n);
   
    return 0;
}