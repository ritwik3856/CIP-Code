#include<iostream>
using namespace std;


int main(){
    string str;
    getline(cin,str,'&'); // this will take the input of the string until it finds the '&' character .
    cout<<str;
    
    for(int i=0;i<str.length();i++)
    cout<<str[i];
    for(char x:str)
    cout<<x;
    for(auto it=str.begin();it!=str.end();it++)
    cout<<(*it);
    return 0;
}