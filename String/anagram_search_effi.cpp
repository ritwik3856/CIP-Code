#include<iostream>

using namespace std;


bool areSame(int cp[],int ct[]){
    for(int i=0;i<256;i++){
        if(cp[i]!=ct[i])
        return false;
    }
    return true;
}
bool is_present(string str,string pat){
    int ct[256]={0},cp[256]={0};
    for(int i=0;i<pat.length();i++){
        ct[str[i]]++;
        cp[pat[i]]++;
    }
    for(int i=pat.length();i<str.length();i++){
        if(areSame(cp,ct))
            return true;
        ct[str[i]]++;
        ct[str[i-pat.length()]]--;
    }
    return false;
}
int main(){
    string str="geeksforgeeks";
    string pat="frog";
    cout<<is_present(str,pat);
    return 0;
}