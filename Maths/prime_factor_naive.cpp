#include<iostream>
using namespace std;

bool isPrime(int n ){
    if(n==1)
    return false;
    for(int i=2;i<n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
void fact_pr(int n){
    for(int i=2;i<n;i++){
        if(isPrime(i)){
            int x=i;
            while(n%x==0){
                cout<<i<<" ";
                x=x*i;
            }
        }
    }
  
}
int main(){
    int n;
    cin>>n;
    fact_pr(n);
    return 0;
}