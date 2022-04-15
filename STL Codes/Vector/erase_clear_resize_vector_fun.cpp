#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int>v{10,20,30,40};
    v.erase(v.begin());//erase the begin element
    for(int x:v)
    cout<<x<<" ";
    cout<<endl;
    v.erase(v.begin(),v.end());//erase all the element 
    cout<<v.size()<<endl;

    vector<int>v1{50,60,70,80};
    v.clear(); // clear all the data in a vector.
    cout<<v1.size()<<endl;
    if(v.empty()){
    cout<<"empty";
    cout<<endl;}
    else
    cout<<"not empty";

    vector<int>v2{10,20,30,40};
    v2.resize(2); //erase the extra element
    for(int &x:v2)
    cout<<x<<" ";
    cout<<endl;
    v2.resize(5);//add the 2 element and assign 0;
    for(int &x:v2)
    cout<<x<<" ";
    cout<<endl;
    v2.resize(8,100); // resize and add 100 at the new element 
   for(auto it=v2.begin();it!=v2.end();it++)//no dulicasy of vector because we uses addresses to traverse it.
   cout<<*it<<" ";
    cout<<endl;


    return 0;
}