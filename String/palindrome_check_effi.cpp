#include<iostream>
using namespace std;

bool CheckPal(string &str){
    int low=0,high=str.length()-1;
    while(low<high){
        if(str[low]==str[high]){
            low++;
            high--;
        }
        else return 0;
    }
    return 1;
}
int main(){
    string str="abba";
    cout<<CheckPal(str);
    return 0;
}