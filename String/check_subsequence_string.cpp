#include<iostream>
using namespace std;

bool CheckSub(string &str1,string &str2){
    int j=0;
    for(int i=0;i<str1.length() && j<str2.length();i++){
        if(str1[i]==str2[j])
        j++;
    }
    return (j==str2.length());
}
int main(){
    string str1="ABCD";
    string str2="AD";
    cout<<CheckSub(str1,str2);
    return 0;
}