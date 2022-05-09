#include<iostream>
using namespace std;


int main(){
  string str="geeks";
  int res=str.find("eeks");
  if(res==string::npos)
        cout<<"not present";
    else
        cout<<"find occurances "<<"at idx "<<res;

        cout<<endl;
    

    return 0;
}