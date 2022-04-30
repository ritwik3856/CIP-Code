#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,int>m;
    m.insert({10,200});
    m[5]=100; // if 5 key not have 100 then it insert's it at the place.
    m.insert({3,300});
    m.at(5)=500; //if key not present then throughs an error message and if present it updates the key with new value.
    for(auto &x:m)
    cout<<x.first<<" "<<x.second<<endl;
    cout<<endl;
    return 0;
}