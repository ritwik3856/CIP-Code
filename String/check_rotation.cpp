#include<iostream>
using namespace std;

int check_rotation(string s1,string s2){
    if(s1.length()!=s2.length())
    return 0;
    return ((s1+s1).find(s2))!=string::npos;
}
int main(){
    string s1="abcd",s2="cdab";
    cout<<check_rotation(s1,s2);
    return 0;
}
