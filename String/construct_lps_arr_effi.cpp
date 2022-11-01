#include<iostream>
using namespace std;

void filllps(string str,int lps[]){
   int n=str.length();
   lps[0]=0;
   int len=0;
   int i=1;
   while(i<n){
    if(str[i]==str[len]){
        len++;lps[i]=len;i++;} //if len and index matches then len++ and enter the value of lps.
    else{
        if(len==0){lps[i]=0;i++;} //if len=0 means no match so 0.
        else{
            len=lps[len-1]; //if not matches then recursively check for previous lps value.
        }
    }
   }
}
int main(){
    string str="ababc";int lps[str.length()];
    filllps(str,lps);
    for(int i=0;i<str.length();i++)
    cout<<lps[i]<<" ";
    return 0;
}