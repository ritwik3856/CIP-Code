#include<iostream>
using namespace std;

void reverse(string &str,int low,int high){
    while(low<=high){
        swap(str[low],str[high]);
        low++;
        high--;
    }
}
void reverse_word(string &str,int n ){
    int start=0;
    for(int end=0;end<n;end++){
        if(str[end]==' '){
            reverse(str,start,end-1); //cba dcb fe
            start=end+1;
        }
    }
    reverse(str,start,n-1); //reversing   the last word that was not reversed
    reverse(str,0,n-1); // reversing the whole sentence again to get the output 
}      //ef bcd abc
int main(){
    string str;
    int n=str.length();
    reverse_word(str,n);
    cout<<str;
    return 0;
}