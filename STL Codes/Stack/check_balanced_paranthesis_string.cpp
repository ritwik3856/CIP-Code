#include<iostream>
#include<stack>
using namespace std;

bool matching(char a,char b){
    return ( (a=='(' && b==')') || (a=='{' && b=='}') || (a=='[' && b==']') );

}
bool check_balanced(string &str){
   stack<char>s;
   for(int i=0;i<str.length();i++){
       if(str[i]=='(' || str[i]=='{' || str[i]=='[')
       s.push(str[i]);
       else if(matching(s.top(),str[i])==false)
       return false;
       else
       s.pop();
   }
   return s.empty()==true;
}
int main(){
    string str;
    getline(cin,str);
    cout<<check_balanced(str);
    return 0;
}