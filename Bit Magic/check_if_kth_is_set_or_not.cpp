#include<iostream>
using namespace std;


int main(){
    int n=5,k=1; 
    if(n & (1<<(k-1))!=0)  //using left shifting 
    cout<<"yes";
    else 
    cout<<"no";

    cout<<endl;


    if((n>>(k-1)) & 1 == 1)  //using right shifting 
    cout<<"yes";
    else 
    cout<<"no";
    return 0;
}