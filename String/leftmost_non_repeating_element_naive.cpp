#include<iostream>
using namespace std;

int nonRep(string str){
    for(int i=0;i<str.length();i++){
        bool flag=false;
        for(int j=i+1;j<str.length();j++){
            flag = true;
        }
        if(flag==false)
        return i;
    }
    return -1;

}
int main(){
    string str="geeksforgeeks";
    cout<<nonRep(str);
    return 0;
}