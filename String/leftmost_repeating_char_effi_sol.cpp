#include<iostream>
using namespace std;


int leftmost(string &str){
  int lc=256;
  int findex[lc];
  fill(findex,findex+lc,-1);
  int res=INT_MAX;
  for(int i=0;i<str.length();i++){
    int fi=findex[str[i]]; 
    if(fi==-1)
    findex[str[i]]=i;
    else
    res=min(res,fi);
  }
  return res;
}
int main(){
    string str="geeksforgeeks";
    cout<<leftmost(str);
    return 0;
}