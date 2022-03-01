#include<iostream>
using namespace std;

void print1_to_N(int n) {
    if(n==0)
    return;
    return print1_to_N(n-1);
    cout<<n<<" ";

}
int main(){
    int n;
    cin>>n;
    print1_to_N(n);
    return 0;
}