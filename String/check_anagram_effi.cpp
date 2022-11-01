#include<iostream>
#include<algorithm>
using namespace std;


bool CheckAnagram(string &s1,string &s2){
   int co=256;
   int count[co]={0};
   if(s1.length()!=s2.length())
    return false;
    
   for(int i=0;i<s1.length();i++){
        count[s1[i]]++;
        count[s2[i]]--;
   }
   for(int i=0;i<256;i++){
    if(count[i]!=0)
        return false;
   }
   return true;
}
int main(){
    string s1="listen";
    string s2="silent";
    cout<<CheckAnagram(s1,s2);
    return 0;
}