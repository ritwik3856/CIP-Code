#include<iostream>
#include<forward_list>
using namespace std;

int main(){
    forward_list<int>l;
    l.assign({10,20,30,50});
    l.remove(20);
    for(forward_list<int>::iterator it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    forward_list<int>l2;
   l2.assign(l.begin(),l.end());
   for(auto &i:l2)
   cout<<i<<" ";

    return 0;
}