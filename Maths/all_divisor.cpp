#include<iostream>
using namespace std;

void divisor_all(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0)
        cout<<i<<" ";
    }
}
int main(){
    int n;
    cin>>n;
    divisor_all(n);
    return 0;
}