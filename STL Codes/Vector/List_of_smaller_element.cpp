#include<iostream>
#include<vector>
using namespace std;

vector<int> get_smaller(int arr[],int k,int n){
    vector<int>res;
    for(int i=0;i<n;i++){
        if(arr[i]<k)
        res.push_back(arr[i]);
    }
    return res;
}
int main(){
    int arr[]{8,100,20,40,3,7};
    int k=10;
    vector<int>res;
    int n=sizeof(arr)/sizeof(arr[0]);
    res=get_smaller(arr,k,n);
    for(int &x:res)
    cout<<x<<" ";
    cout<<endl;
}