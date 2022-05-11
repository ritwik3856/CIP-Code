#include<iostream>
using namespace std;

bool palindrome(int n){
    int rev=0;
    int temp=n;
    while(temp!=0){
        int ld=temp%10;
        rev=rev*10+ld; // multiply and adding the last digit one by one .
        temp=temp/10;
        cout<<rev<<" ";
    }
    if(n==rev)
    return true;
    else 
    return false;
}
int main(){
    int n;
    cin>>n;
    cout<<palindrome(n);
    return 0;
}