#include<iostream>
#include<list>
using namespace std;


int main(){
    int n=7,k=3;
   list<int>l;
   for(int i=0;i<n;i++)
   l.push_back(i);
   auto it=l.begin();
   while(l.size()>1){
       for(int c=1;k>c;c++){
       it++;
       if(it==l.end())
       it=l.begin();
       }
       it=l.erase(it);
       if(it==l.end())
       it=l.begin();
   }
    cout<<*it; 
    return 0;
}