#include<iostream>
using namespace std;

int jos(int n,int k){
    if(n==1)
    return 0;
    return (jos(n-1,k)+k)%n; //going n-1 and k is the distance and +k is the sword holder and %n brings in range 
}
int main(){
    cout<<jos(5,3);
    return 0;
}