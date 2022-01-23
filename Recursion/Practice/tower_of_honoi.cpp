#include<iostream>
using namespace std;

void toh(int n , char a ,char  b,char c) {
    if(n==1){
    cout<<" move 1 from "<<a<<" to " << c<<endl;
    return ;
    }
    toh(n-1,a,c,b);
    cout<<" move "<<n<<" from "<<a<<" to "<<c<<endl;
    toh(n-1,b,a,c);
}
int main(){
    int n;
    char a,b,c;
    cin>>n;
    cin>>a>>b>>c;
    toh(n,a,b,c);
    return 0;
}