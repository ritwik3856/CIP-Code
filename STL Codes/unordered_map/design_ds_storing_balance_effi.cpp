#include<iostream>
#include<unordered_map>
using namespace std;

class design_map{
    public:
    unordered_map<int,int>m;
    void set(int id,int bal){
        m[id]=bal;
    }
    int get(int id){
        return m[id];
    }
};

int main(){
    design_map d1;
    d1.set(1,100);
    d1.set(2,200);
    d1.set(1,5000); //overwrites the value in the map
    cout<<d1.get(1);
    return 0;
}