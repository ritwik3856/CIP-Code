#include<iostream>
using namespace std;

void filllps(string str,int lps[],int m){
    lps[0]=0;
    int i=1;
    int len=0;
    while(i<m){
        if(str[i]==str[len]){
            len++;lps[i]=len;i++;
        }
        else{
            if(len==0){lps[i]=0;i++;}
            else{
                len=lps[len-1];
            }
        }
    }
}
void kmp_algo(string str,string pat){
   int n=str.length();
   int m=pat.length();
   int lps[m];
   filllps(pat,lps,m);
   int i=0,j=0;
   cout<<"Fount at index : ";
   while(i<n){
    if(str[i]==pat[j]){i++;j++;}
    else if(j==m){
        cout<<i-j<<" ";
        j=lps[j-1];
    }
    else if((i<n) && pat[j]!=str[i]){
        if(j==0){i++;}
        else{
            j=lps[j-1];
        }
    }
   }
}
int main(){
    string str="ababcabababaad",pat="ababa";
    kmp_algo(str,pat);
    return 0;
}
