#include<iostream>
using namespace std;

bool CheckSub(string &str1,string &str2,int m,int n){
    if(m==0)
    return true;
    if(n==0)
    return false;
    if(str1[n-1]==str2[m-1])
    return CheckSub(str1,str2,n-1,m-1);
    else 
    return CheckSub(str1,str2,n-1,m);
    
}
int main(){
    string str1="ABCD";
    string str2="AD";
    int m=str1.length();
    int n=str2.length();
    cout<<CheckSub(str1,str2,m,n );
    return 0;
}