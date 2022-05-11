#include<iostream>
#include<vector>
using namespace std;

void sieve_prime(int n){
    vector<bool>isprime(n+1,true);
   for(int i=2;i<=n;i++){
       if(isprime[i]){
           cout<<i<<" ";
           for(int j=i*i;j<=n;j=j+i)
           isprime[j]=false;
           
       }
   }
}
int main(){
    int n;
    cin>>n;
    sieve_prime(n);
    return 0;
}