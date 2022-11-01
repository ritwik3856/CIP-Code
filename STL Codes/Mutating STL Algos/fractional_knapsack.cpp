#include<iostream>
#include<algorithm>
using namespace std;


bool mycmp(pair<int,int>p1,pair<int,int>p2){
    double r1=p1.first/p1.second;
    double r2=p2.first/p2.second;
    return r1>r2; // for decreasing the arrangement of value per weight .
}
int main(){
    pair<int,int> arr[]={{120,30},{100,20},{60,10}};
    int n=sizeof(arr)/sizeof(arr[0]);
    int w=50;
    sort(arr,arr+n,mycmp);
    for(auto x:arr)
    cout<<x.first<<" "<<x.second<<endl;
    double res=0.0;
    for(int i=0;i<n;i++){
        
        if(arr[i].second<=w){
        res+=arr[i].first; // adding the cost 
        w-=arr[i].second; // subtracting the weight.
        }
        else
        {
            res+=arr[i].first*((double)w/arr[i].second); // if partial weight is only used .
            break;
        }
    }
    cout<<res;
    return 0;
}