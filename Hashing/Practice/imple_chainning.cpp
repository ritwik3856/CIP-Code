#include<iostream>
#include<list>
using namespace std;


struct myhash{
    int bucket;
    list<int>*table;
    
    myhash(int b){
        bucket=b;
        table=new list<int>[b];
    }
    void insert(int key) {
        int i=key%bucket;
        table[i].push_back(key);
    }
    void remove(int key) {
        int i=key%bucket;
        table[i].remove(key);
    }
   bool search(int key) {
       int i=key%bucket;
       for(auto x:table[i]) 
       if(x==key)
       return true;
       return false;
   }
};
	int main() 
	{ 
	   myhash mh(7);
       mh.insert(10);
       mh.insert(20);
       mh.insert(15);
       cout<<mh.search(10)<<endl;
       mh.remove(20);
       cout<<mh.search(20);
	} 
