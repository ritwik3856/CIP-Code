#include<iostream>
using namespace std;

void find_pat(string &txt,string &pat){
  int m=txt.length();
  int n=pat.length();
  for(int i=0;i<=m-n;){
    int j;
    for(j=0;j<n;j++)
        if(pat[j]!=txt[i+j])
        break;
    if(j==n)
    cout<<i<<" ";
    if(j==0)
    i++;
    else 
    i=i+j;  
  }
}
int main(){
    string txt="geeksforgeeks";
    string pat="eks";
    find_pat(txt,pat);
    return 0;
}