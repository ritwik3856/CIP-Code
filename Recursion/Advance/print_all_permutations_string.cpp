#include<iostream>
using namespace std;

void printper(string s,int i){
    if(i==s.length()){
        cout<<s<<" ";
        return ;
    }
  for(int j=i;j<s.length();j++){
      swap(s[i],s[j]);
      printper(s,i+1);
      swap(s[i],s[j]);
  }
}
int main(){
    string s="ABC";
    int i=0;
    printper(s,i);
    return 0;
}