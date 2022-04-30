#include<iostream>
#include<map>
using namespace std;

class design {
    public:
    multimap<int,string>m;

    void insert(int price , string name){
    m.insert({price,name});
    }
    void find(int price){
        auto it=m.equal_range(price);
        for(auto itr=it.first;itr!=it.second;itr++){
            cout<<itr->second<<" "<<itr->first<<endl;
        }
    }
    void printsorted(){
        for(auto x:m){
        cout<<x.second<<" "<<x.first<<endl;
        }
    }
    void print_greater_sorted(int price){
        auto it=m.upper_bound(price);
        while(it!=m.end()){
            cout<<(*it).second<<" "<<(*it).first<<endl;
            it++;
        }
    }
    void print_smaller_sorted(int price){
       auto it=m.lower_bound(price);
       for(auto it2=m.begin();it2!=it;it2++)
       cout<<it2->second<<" "<<it2->first<<endl;
    }

};
int main(){
    design d1;
    d1.insert(10,"abc");
    d1.insert(5,"xyz");
    d1.insert(100,"pqr");
    d1.find(5);
    d1.printsorted();
    d1.print_greater_sorted(7);
    d1.print_smaller_sorted(20);
    return 0;
}