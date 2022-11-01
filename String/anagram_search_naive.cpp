#include<iostream>
using namespace std;

bool is_anagram(string str,string pat,int i){
    int count[256]={0};
    for(int j=0;j<pat.length();j++){
            count[str[i+j]]++;
            count[pat[j]]--;
    }
    for(int j=0;j<256;j++){
        if(count[j]!=0)
        return false;
    }
    return true;
}

bool pat_present(string str,string pat){
    int n=str.length();
    int m=pat.length();
    for(int i=0;i<=(n-m);i++){
        if(is_anagram(str,pat,i))
        return true;
    }
    return false;
}

int main(){
    string str="geeksforgeeks";
    string pat="frog";
    cout<<pat_present(str,pat);
    return 0;
}