#include<iostream>
#include<tuple> //it is used to store hectrogenous data it was like struct.
using namespace std;


int main(){
    tuple<string,int,string>t=make_tuple("abc",10,"xyz"); //make a tuple
    cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t)<<endl; //angular brackets these are template parameter used to indexing with tuple and process in compile time.
    get<0>(t)="pqr"; //under angular bracket must be constant value not variable.
    cout<<get<0>(t);//changes the index 0 of the tuple.
    return 0;
}