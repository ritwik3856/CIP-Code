#include<iostream>
#include<string>
using namespace std;

string dad(string str){
    int pos=str.find('.');
    if(pos==string::npos)
    return "";
    return str.substr(pos+1);
}
int main(){
    string str ="12.5318";
    cout<<dad(str);
    return 0;
}