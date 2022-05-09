#include<iostream>
#include<algorithm>
using namespace std;


char comp(string s1, string s2){
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    int n=s1.length();
    for(int i=0;i<n;i++)
    if(s1[i]!=s2[i])
        return s2[i];
    
    return s2[n];
}
int main(){
    string s1="abad";
    string s2="abada"; 
    cout<<comp(s1,s2); 
    
    return 0;
}