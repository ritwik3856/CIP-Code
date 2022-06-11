#include<iostream>
using namespace std;

const int lc=256;
int leftmost(string &str){
   int count[lc]={0};
   for(int i=0;i<str.length();i++){
       count[str[i]]++;
   }
   for(int i=0;i<str.length();i++){
       if(count[str[i]]>1)
       return i;
   }
   return -1;
}
int main(){
    string str="geeksforgeeks";
    cout<<leftmost(str);
    return 0;
}