#include<iostream>
#include<vector>
using namespace std;

void jos(vector<int>&v,int idx,int k,int &ans){
    if(v.size()==1)
    {
        ans=v[0]; //storing the answer as vector at last became 1 size only . 
        return;
    }
    idx=((idx+k)%v.size()); //which will hold the sword and going to be deleted.
    v.erase(v.begin()+idx); //erasing the holder of the sword and automatically assigning the it to the next holder.
    jos(v,idx,k,ans);
}
int main(){
   vector<int>v;
   int n,k,ans;
   cin>>n;
   cin>>k;
   for(int i=0;i<n;i++)
   v.push_back(i);
   int idx=0;
    jos(v,idx,k-1,ans); // k-1 because starting from 0.
    cout<<ans;
    return 0;
}