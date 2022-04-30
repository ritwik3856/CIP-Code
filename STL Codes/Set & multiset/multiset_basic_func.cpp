#include<iostream>
#include<set>
using namespace std;


int main(){
    multiset<int>ms;
    ms.insert(2);
    ms.insert(5);
    ms.insert(5);// multiset allow duplicate items.
    ms.insert(10);
    for(int x:ms)
    cout<<x<<" ";
    cout<<endl;
    auto it=ms.equal_range(2); // give the lower and upper bound in a pair.
    cout<<*it.first<<" "<<*it.second;
    return 0;
}