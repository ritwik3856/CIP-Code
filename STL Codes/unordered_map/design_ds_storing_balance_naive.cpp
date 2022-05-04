#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

class design_map{
    public:
    vector<pair<int,int>>v;

   void set(int id,int bal){
       for(int i=0;i<v.size();i++){
           if(v[i].first==id){
               v[i].second=bal;
               return;
           }
       }
      v.push_back({id,bal});
   }

   int get(int id){
       for(int i=0;i<v.size();i++)
       if(v[i].first==id)
       return v[i].second;
       return -1;
   }
   
   void print(){
       for(auto &x:v)
       cout<<x.first<<" "<<x.second<<endl;
   }
};

int main(){
    design_map d1;
    d1.set(1,100);
    d1.set(2,200);
    d1.set(1,5000); //overwrites the value in the map
    d1.print();
    cout<<d1.get(1);
    
    return 0;
}