#include<iostream>
#include<map>
using namespace std;

class design {
    public:
    map<int,string>m;

    void insert(int price , string name){
    m[price]=name;
    }
    string find(int price){
        auto res=m.find(price);
        if(res==m.end())
        return " ";
        else 
        return res->second;
    }
    void printsorted(){
        for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
        }
    }
    void print_greater_sorted(int price){
        auto it=m.upper_bound(price);
        while(it!=m.end()){
            cout<<(*it).first<<" "<<(*it).second<<endl;
            it++;
        }
    }
    void print_smaller_sorted(int price){
       auto it=m.lower_bound(price);
       for(auto it2=m.begin();it2!=it;it2++){
           cout<<(*it2).first<<" "<<(*it2).second<<endl;
       }
    }

};
int main(){
    design d1;
    d1.insert(10,"abc");
    d1.insert(5,"xyz");
    d1.insert(100,"pqr");
    cout<<d1.find(5)<<endl;
    d1.printsorted();
    d1.print_greater_sorted(7);
    d1.print_smaller_sorted(20);
    return 0;
}