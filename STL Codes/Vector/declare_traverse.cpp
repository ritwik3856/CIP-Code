#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>v={10,20,30};
    v.push_back(50);
    v.push_back(60);
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    cout<<endl;

    for(auto &x:v) //to prevent the copy of the vector and increasing the unwanted space 
    cout<<x<<" ";
    cout<<endl;

    cout<<v.at(3);//it do the type checking instread of v[i] and check for arrayindexoutofbound
    cout<<endl;

    int n=3,x=10;
    vector<int>v2(x,n);//x gives the length of the vector and n gives the default no. to be inserted.
    for(vector<int>::iterator it=v2.begin();it!=v2.end();it++)//we can use auto in the intilization 
    cout<<*it<<" ";
    cout<<endl;

    int arr[]={4,5,6};
    int n1=sizeof(arr)/sizeof(arr[0]);
    vector<int>v3(arr,arr+n1);
    for(auto it=v3.rbegin();it!=v3.rend();it++)
    cout<<*it<<" ";
    cout<<endl;

}