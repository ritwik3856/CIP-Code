#include<iostream>
#include<set>
using namespace std;

class ds{
public:
 set<int>s;
    void insert(int x){
        s.insert(x);
    }
    bool search(int x){
        return (s.find(x)!=s.end());
    }
    void del(int x){
        s.erase(x);
    }
    int get_ceil(int x){
        auto it=s.lower_bound(x);
        if(it==s.end())
        return INT_MAX;
        else
        return *it;
    }
    int get_floor(int x){
       auto it=s.lower_bound(x);
       if(it==s.begin()){
           if(*it==x)
           return *it;
           else
           return INT_MIN;
       }
       else{
           it--;
           return *it;
       }
    }
};
int main(){
    ds s1;
    s1.insert(3);
    s1.insert(5);
    s1.insert(10);
    s1.insert(20);
    s1.del(10);
    cout<<s1.search(11)<<" ";
    cout<<s1.get_ceil(6)<<" ";
    cout<<s1.get_floor(2)<<" ";
    return 0;
}