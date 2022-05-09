#include<iostream>

using namespace std;


int main(){
    int n=3;
    cout<<__builtin_popcount(n)<<endl; //count the no. of 1's set bits in an integer like 3 has binary form 2 one's.
    cout<<__builtin_parity(n);//this will return parity if odd 1's then true and even 1's false.
    return 0;
}