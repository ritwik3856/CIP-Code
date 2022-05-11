#include<iostream>
using namespace std;


void fact_pr(int n){
   if(n<1)
   return;

    while(n%2==0){ // for even steps 
        cout<<"2"<<" ";
        n=n/2;
    }
   for(int i=3;i*i<n;i=i+2){ //for odd steps 
       while(n%i==0){ //for continuity of a no.
           cout<<i<<" ";
           n=n/i;
       }
   }
   if(n>2)
   cout<<n;
   cout<<endl<<endl;
}
void opt_fact(int n ){
    if(n<=1) return ;
    while(n%2==0) {
        cout<<2<<" ";
        n=n/2;
    }
    while(n%3==0) {
        cout<<3<<" ";
        n=n/3;
    }
    for(int i=5;i*i<=n;i=i+6){
        while(n%i==0){
            cout<<i<<" ";
            n=n/i;
        }
        while(n%(i+2)==0){
            cout<<i+2<<" ";
            n=n/(i+2);
        }
    }
    if(n>3)
    cout<<3<<" ";
}

int main(){
    int n;
    cin>>n;
    fact_pr(n);
    opt_fact(n);
    return 0;
}