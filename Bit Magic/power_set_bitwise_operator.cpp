#include<iostream>
#include<math.h>
using namespace std;


int main(){
 string str="abc";
 int n=str.length();
 int ps=pow(2,n);
 for(int c=0;c<ps;c++){
     for(int j=0;j<n;j++){
         if((c & (1<<j))!=0) //counting the last set bit.
         cout<<str[j];
     }
     cout<<endl;
 }
    return 0;
}