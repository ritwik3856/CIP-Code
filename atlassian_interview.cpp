// Given 2 password arrays password_arr1 and password_arr2, where password_arr1 is the list of passwords 
// previously used and password_arr2 is the list of passwords that are to be queried. Return the array indexes
//  representing the time when the passwords in the password_arr2 array were last used. Note that the password
//   is considered to be used if its anagram exists in the password_arr1 array. For Example, 
//   password_arr1 = [‘polo’, ‘neal’, ‘nodl’] , password_arr2 = [‘lean’, ‘ldon’, ‘loop’].

// So the last times the passwords were used at [1,2,0], where 0,1 and 2 represent the indices of 
// passwords in the password_arr1 array.


#include<bits/stdc++.h>
using namespace std;


vector<int> check(vector<string> arr1,vector<string> arr2){
    vector<int>ans;
    vector<vector<char>>a1;
    for(int i=0;i<arr1.size();i++){
        vector<char>temp;
        for(int j=0;j<arr1[i].size();j++){
            temp.push_back(arr1[i][j]);
        }
        sort(temp.begin(),temp.end());
        a1.push_back(temp);
    }
     vector<vector<char>>b1;
    for(int i=0;i<arr2.size();i++){
        vector<char>temp;
        for(int j=0;j<arr2[i].size();j++){
            temp.push_back(arr2[i][j]);
        }
        sort(temp.begin(),temp.end());
        b1.push_back(temp);
    }

    unordered_map<string,int>ma;

    for(int i=0;i<a1.size();i++){
        string temp;
        for(int j=0;j<a1[i].size();j++)
        temp+=a1[i][j];
        ma[temp]=i;

    }

    for(int i=0;i<b1.size();i++){
        string temp;
        for(int j=0;j<b1[i].size();j++)
        temp+=b1[i][j];
        auto it=ma.find(temp);
        if(it!=ma.end())
        ans.push_back(it->second);
    }

    return ans;   
}
int main(){
    vector<string>arr1;
    vector<string>arr2;
     string temp;
    for(int i=0;i<3;i++){
        cin>>temp;
        arr1.push_back(temp);
    }
    for(int i=0;i<3;i++){
        cin>>temp;
        arr2.push_back(temp);
    }
    vector<int>res=check(arr1,arr2);

    cout<<"\n";
    for(auto i:res)
    cout<<i<<" ";
    return 0;
}