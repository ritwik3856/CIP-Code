#include<iostream>
using namespace std;

void divisor_all(int n){
   for(int i=1;i*i<=n;i++){
       if(n%i==0){
           cout<<i<<" ";
           if(i!=n/i)
           cout<<n/i<<" ";
       }
   }
   cout<<endl; 
}
void opt_divisor_order(int n){
    int i=1;
    for( i=1;i*i<n;i++){
    if(n%i==0)
    cout<<i<<" ";
    }
    for( ;i>=1;i--){
        if(n%i==0)
        cout<<n/i<<" ";
        
    }
}
int main(){
    int n;
    cin>>n;
    divisor_all(n); //without order 
    opt_divisor_order(n);
    return 0;
}