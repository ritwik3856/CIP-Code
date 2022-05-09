#include<iostream>
#include<algorithm>
using namespace std;


char comp(string s1, string s2){
  int n=s1.length();
    int res=0;
for(int i=0;i<n;i++)
      res=res^s1[i]^s2[i];

    res=res^s2[n];
  
    return (char)res;

}
int main(){
    string s1="aabcbc";
    string s2="abbccba"; 
    cout<<comp(s1,s2); 
    
    return 0;
}