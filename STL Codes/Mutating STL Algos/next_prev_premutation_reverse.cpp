#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int main(){
    vector<int>v{1,2,3,4,5};
    vector<int>v2{1,2,3,4,5};
    next_permutation(v.begin(),v.end()); //next permutation of the input vector.
    for(auto x:v)
    cout<<x<<" ";
    cout<<endl;

    prev_permutation(v2.begin(),v2.end()); //clockwise rotation in the permutation list and print prev permutation.
    for(auto x:v2)
    cout<<x<<" ";
    cout<<endl;

    reverse(v2.begin(),v2.end());
    for(auto x:v2)
    cout<<x<<" ";
    return 0;
}