#include<iostream>
using namespace std;

bool CheckSub(string &s1,string &s2,int m,int n){
    if(n==0)
    return true;
    if(m==0)
    return false;
    if(s1[m-1]==s2[n-1])
    return CheckSub(s1,s2,m-1,n-1);
    else
    return CheckSub(s1,s2,m-1,n);
}
int main(){
    string str1;
    getline(cin,str1); //abcd
    string str2;       //ad
    getline(cin,str2);
    int m=str1.length();
    int n=str2.length();
    cout<<CheckSub(str1,str2,m,n );  //return true;
    return 0;
}