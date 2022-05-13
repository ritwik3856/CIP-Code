#include<iostream>
using namespace std;


int main(){
    int n=5;
    int res=0;
    while(n>0){
        if(n%2!=0) //if((n&1)==1)
        res++;
        n=n/2; //n=n>>1;
    }
    cout<<res<<endl;
    return 0;
}