#include<iostream>
using namespace std;


int main(){
   string str="geeksforgeeks";
   string pat="geeks";
   int  pos = str.find(pat);
   while(pos!=string::npos){
       cout<<pos<<" ";
       pos=str.find(pat,pos+1);
   }
    return 0;
}