#include<iostream>
#include<algorithm>
using namespace std;

bool CheckPal(string &str){
    string rev=str;
    reverse(str.begin(),str.end());
    return str==rev;
}
int main(){
    string str="abba";
    cout<<CheckPal(str);
    return 0;
}