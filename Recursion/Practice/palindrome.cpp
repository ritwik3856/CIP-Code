#include<iostream>
using namespace std;

bool pal(string &str,int start ,int end) {
    if(start>=end)
    return true;
    return (str[start]==str[end] && pal(str,start+1,end-1));
}
int main(){
    int start=0,end;
    string str;
    getline(cin,str);
    end=(str.length()-1);
    cout<<pal(str,start,end);
    return 0;
}