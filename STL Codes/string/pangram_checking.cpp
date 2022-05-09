#include<iostream>
using namespace std;

bool pangram(string s){
    int n=s.length();
    if(n<26)
    return false;
    int v[26]={0};
    for(int i=0;i<n;i++){
        char x=s[i];
        if(x>='a' && x<='z')
        v[x-'a']=true;
        if(x>='A' && x<='Z')
        v[x-'A']=true;
    }
    for(int i=0;i<26;i++){
        if(v[i]==false)
        return false;
    return true;
    }
    return 0;
}
int main(){
    string s="the quick brown fox jumps over the lazy dog";
    cout<<pangram(s);
    return 0;
}