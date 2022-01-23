#include<iostream>
using namespace std;

int rc(int n, int a ,int b ,int c) {
    if(n==0) return 0;
    if(n<=-1) return -1;
    int res=max(rc(n-a,a,b,c),max(rc(n-b,a,b,c),rc(n-c,a,b,c)));
    if(res==-1)
    return res;
    else
    return res+1;
}
int main(){
    int n=23,a=11,b=9,c=12;
    cout<<rc(n,a,b,c);
    return 0;
}