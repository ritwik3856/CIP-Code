#include<iostream>
#include<tuple>
using namespace std;


int main(){
    tuple<char,int,int>t('g',20,30);
    cout<<tuple_size<decltype(t)>::value<<endl; //decltype is like auto to avoid long typing of tuple<char,int,int> it has the member value which gives how many members are there.
    char x;
    int y,z;
    tie(x,y,z)=t; //storing the tuple in individual variable and used in later
    cout<<x<<" "<<y<<" "<<z<<endl; //tie(x,ignore,z) this can be used to ignore the datatype in tuple.
    tuple<string,int>t2("abc",50);
    auto t3=tuple_cat(t,t2); // merge both the  tuple 
    cout<<get<0>(t3)<<" "<<get<4>(t3); //output of the merge tuple.
    return 0;
}