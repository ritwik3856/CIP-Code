#include<iostream>
#include<stack>
using namespace std;


int main(){
    string s="29+";
    stack<int>st;

    for(int i=0;i<s.length();i++){
       if(isdigit(s[i])){
        char temp=s[i]-'0';
        st.push(temp);
       }
       else{
        int val1=st.top();
        cout<<st.top()<<" ";
        st.pop();
        int val2=st.top();
        cout<<st.top()<<" ";
        st.pop();
        switch(s[i]){
            case '+':st.push(val2+val1);
            case '-':st.push(val2-val1);
            case '*':st.push(val2*val1);
        }
       }
       
    }
    cout<<st.top();

    return 0;
}