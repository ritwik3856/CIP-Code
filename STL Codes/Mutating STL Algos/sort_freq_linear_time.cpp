#include<iostream>
#include<algorithm>
#include<unordered_map>
#include<vector>
using namespace std;


int main(){
    int arr[]={10,5,20,10,10,5,20};
    int n=sizeof(arr)/sizeof(arr[0]);

    unordered_map<int,int>m; //building a map with frequencies
    for(int i=0;i<n;i++)
    m[arr[i]]++;

    vector<int>freq[n+1];  //using frequencies as indexes and pushing the elements.
    //  for(auto x:m)
    //     freq[x.second].push_back(x.first);  //without ordering technique viewing in the map.

   for(int i=0;i<n;i++){ //showing the left most appeareance first
       int f=m[arr[i]];
       if(f!=-1){
           freq[f].push_back(arr[i]);
           m[f]=-1;
       }
       
   }

    int idx=0;   
    for(int i=n;i>0;i--)     //traversing the indexes from the last and printing them.
        for(auto x:freq[i])
            for(int j=0;j<i;j++)  //for repeating the elements.
                arr[idx++]=x;
    

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

  
    return 0;
}