#include<iostream>
using namespace std;

#define d 256
const int q=101;

void rbsearch(string txt,string pat,int m,int n){
    int h=1;
    for(int i=1;i<=m-1;i++)
    h=(h*d)%q; //calculating the value of d

    int p=0,t=0;
    for(int i=0;i<m;i++){
        p=(p*d+pat[i])%q; //calculate the hash of p
        t=(t*d+txt[i])%q; //calculate the begin hash for txt then apply rolling hash
    }
    for(int i=0;i<=(n-m);i++){
        if(p==t){  //if hashed value same then check with naive approach
            bool flag=true;
            for(int j=0;j<m;j++)
            if(txt[i+j]!=pat[j]){flag=false;break;}
            if(flag==true)
            cout<<i<<" ";
        }
        if(i<n-m){
            t=((d*(t-txt[i]*h))+txt[i+m])%q; //calculating the hash values for the next value of i.
            if(t<0)
            t=t+q; //if hash is negative then helping it to convert in positive.
        }
    }
}
int main(){
    string txt="abdabcbabc";
    string pat="abc";
    cout<<"all index no. where the pattern is present : ";
    rbsearch(txt,pat,3,txt.length());
    return 0;
}