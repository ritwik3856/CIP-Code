#include<iostream>
using namespace std;


int nonRep(string str){
   int ch=256;
   int count[ch];
   fill(count,count+ch,-1);
   for(int i=0;i<str.length();i++){
    if(count[str[i]]==-1)
        count[str[i]]=i;
    else
        count[str[i]]=-2;
   }
   int res=INT_MAX;
   for(int i=0;i<ch;i++){
    if(count[i]>=0)
    res=min(res,count[i]);
   }
   return res==INT_MAX?-1:res;

}
int main(){
    string str="abbcbda";
    cout<<nonRep(str);
    return 0;
}