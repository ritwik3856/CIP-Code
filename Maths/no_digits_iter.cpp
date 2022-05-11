#include<iostream>
using namespace std;

int countdigit(int n){
    int res=0;
    while(n>0){
        res++;
        n=n/10;
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<countdigit(n);
    return 0;
}