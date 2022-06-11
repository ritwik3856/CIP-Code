#include<iostream>
using namespace std;

const int lc=256;
int nonRep(string str){
   int res=INT_MAX;
   int fi[lc];
   fill(fi,fi+lc,-1);
    for(int i=0;i<str.length();i++){
        if(fi[str[i]]==-1)
            fi[str[i]]=i;
        else 
        fi[str[i]]=-2;
    }
    for(int i=0;i<lc;i++){
        if(fi[i]>0){
            res=min(res,fi[i]);
        }
    }
    return res;
}
int main(){
    string str="abbcbda";
    cout<<nonRep(str);
    return 0;
}