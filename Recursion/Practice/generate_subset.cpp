#include<iostream>
using namespace std;

void subset(string &str,string curr,int i) {
    if(str.length()==i)
    {
        cout<<curr<<" ";
        return;
    }
    subset(str,curr,i+1);
    subset(str,curr+str[i],i+1);
}
int main(){
    string str;
    getline(cin,str);
    subset(str,"",0);
    return 0;
}