#include<iostream>
using namespace std;

bool prime(int n){
if(n==1)
return false;
for(int i=2;i*i<n;i++)
if(n%i==0)
return false;
return true;
}
bool opti_prime(int n){
    if(n==1)
    return false;
    if(n==2 || n==3)
    return true;
    if(n%2==0 || n%3==0)
    return false;
    for(int i=5;i*i<=n;i=i+6)
    if(n%i==0 || n%(i+2)==0)
    return false;
    return true;
}

int main(){
    int n;
    cin>>n;
    cout<<prime(n)<<endl;
    cout<<opti_prime(n);
    return 0;
}