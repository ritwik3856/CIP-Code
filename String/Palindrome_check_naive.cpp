#include<iostream>
#include<algorithm>
using namespace std;

bool CheckPal(string &str){
    string rev=str;
    reverse(rev.begin(),rev.end());
    return (str==rev);
}
int main(){
    string str="abba";
    cout<<CheckPal(str);
    return 0;
}