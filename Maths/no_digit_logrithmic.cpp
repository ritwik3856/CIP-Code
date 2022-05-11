#include<iostream>
#include<math.h>
using namespace std;

int countdigit(int n){
   return floor(log10(n)+1);
}
int main(){
    int n;
    cin>>n;
    cout<<countdigit(n);
    return 0;
}