#include<iostream>
#include<vector>
using namespace std;

void input_ar(vector<int>arr[],int m,int n){

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i].push_back(i);
        }
    }

}
int main(){
    int m=3,n=2;
    vector<int>arr[m];

input_ar(arr,m,n);

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<'\n';
    }
    return 0;
}