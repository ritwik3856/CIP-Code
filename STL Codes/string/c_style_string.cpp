#include<iostream>
using namespace std;


int main(){
    string str="gfg";
    cout<<str.length()<<endl;
    str=str+"xyz";
    cout<<str<<endl;
    cout<<str.substr(1,3)<<endl;
    cout<<str.find("fg");
    return 0;
}