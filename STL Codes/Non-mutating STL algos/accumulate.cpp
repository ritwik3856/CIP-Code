#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

int myfun(int x,int y ){
    return x*y;
}
int main(){
    vector<int>v{10,20,30};
    int sum=0;
    int sum1=100;
    int sum2=1;
    cout<<accumulate(v.begin(),v.end(),sum)<<endl;
    cout<<accumulate(v.begin(),v.end(),sum1)<<endl;
    cout<<accumulate(v.begin(),v.end(),sum2,myfun)<<endl;
    return 0;
}