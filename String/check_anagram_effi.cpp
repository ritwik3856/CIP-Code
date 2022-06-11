#include<iostream>
#include<algorithm>
using namespace std;

const int lc=256;
bool CheckAnagram(string &s1,string &s2){
    if(s1.length()!=s2.length())
    return false;
    int count[lc]={0};
    for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]--;
    }
    for(int i=0;i<lc;i++){
    if(count[i]>0)
    return false;
    }
    return true;
}
int main(){
    string s1="listen";
    string s2="silent";
    cout<<CheckAnagram(s1,s2);
    return 0;
}