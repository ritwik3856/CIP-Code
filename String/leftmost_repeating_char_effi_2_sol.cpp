#include<iostream>
using namespace std;

const int lc=256;
int leftmost(string &str){
   int res=-1;
   bool visited[lc]={false};
   for(int i=str.length()-1;i>=0;i--){
    if(visited[str[i]])
    res=i;
    else
    visited[str[i]]=true;
   }
   return (res==INT_MAX)?-1:res;
}
int main(){
    string str="geeksforgeeks";
    cout<<leftmost(str);
    return 0;
}