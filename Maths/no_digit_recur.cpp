#include<iostream>
using namespace std;

int countdigit(int n){
    if(n==0)
    return 0;
    else
    return (1+countdigit(n/10));
}
int main(){
    int n;
    cin>>n;
    cout<<countdigit(n);
    return 0;
}