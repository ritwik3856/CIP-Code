#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v{1,2,3,4};
    v.pop_back(); // popped the last element of the vector
    for(auto &x:v)
    cout<<x<<" ";
    cout<<endl;

    cout<<v.front()<<" "<<endl;
    cout<<v.back()<<" "<<endl;

    vector<int>v1{10,5,20,15};
   auto it=v1.insert(v1.begin(),100);// insert 100 at begin
    v1.insert(v1.begin()+2,200);//insert 200 at position 2
    v1.insert(v1.begin(),2,300);//insert 300 at begin times 
    vector<int>v2;
   v2.insert(v2.begin(),v1.begin(),v1.begin()+2); //start from begin to +2;
    for(int x:v1)
    cout<<x<<" ";
    cout<<endl;
    for(int x:v2)
    cout<<x<<" ";
    cout<<endl;



}