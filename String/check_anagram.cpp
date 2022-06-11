#include<iostream>
#include<algorithm>
using namespace std;

bool CheckAnagram(string &s1,string &s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    return (s1==s2);
}
int main(){
    string s1="listen";
    string s2="silent";
    cout<<CheckAnagram(s1,s2);
    return 0;
}