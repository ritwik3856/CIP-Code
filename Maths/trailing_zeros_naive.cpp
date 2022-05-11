#include<iostream>
using namespace std;

int trail_zeros(int n){
   int c=0;
   int fact=1;
   for(int i=2;i<=n;i++){
       fact=fact*i;
   }
   if(fact%10==0){
       c++;
       fact=fact/10;
   }
   return c;
}
int main(){
    int n;
    cin>>n;
    cout<<trail_zeros(n);
    return 0;
}