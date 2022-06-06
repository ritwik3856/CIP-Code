#include<iostream>
#include<vector>
using namespace std;

void input_ar(vector<vector<int>>&v ,int m,int n){
     for(int i=0;i<m;i++){
        vector<int>temp;
        for(int j=0;j<n;j++){
            temp.push_back(10);
        }
        v.push_back(temp);
    }
}
int main(){
    int m=3,n=2;
   vector<vector<int>>v;

input_ar(v,m,n);
   
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}