#include<iostream>
using namespace std;


void print_tail(int n,int k=1) {
    if(n==0)
    return ;
    cout<<k<<" ";
    return print_tail(n-1,k+1);
}
int main(){
    int n;
    cin>>n;
    print_tail(n);
    return 0;
}