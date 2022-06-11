#include<iostream>
using namespace std;

const int lc=256;
int leftmost(string &str){
  int fidx[lc]={-1};
  int res=INT_MAX;
  for(int i=0;i<str.length();i++){
      int fi=fidx[str[i]];
      if(fi==-1)
            fidx[str[i]]=i;
        else
            res=min(res,fi);
  }
  return (res==INT_MAX?-1:res);
}
int main(){
    string str="geeksforgeeks";
    cout<<leftmost(str);
    return 0;
}