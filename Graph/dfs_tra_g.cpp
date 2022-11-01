#include<iostream>
#include<vector>
#include<queue>
using namespace std;
/* creating a visited boolean array of vertices which keep track of visited element then traversing the adj list
and going deep into the particular vertices till its all element visited and backtracking it to remove complexity we 
can use stack to do so*/
void dfs(vector<int> adj[],int s,bool visited[]){ 
    visited[s]=true;
    cout<<s<<" ";

    for(auto v:adj[s]){
        if(visited[v]==false){
            visited[v]=true;
            dfs(adj,v,visited);
        }
    }
}
void addadj(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int main(){
    int v=5;
    vector<int>adj[v];
    addadj(adj,0,1);
    addadj(adj,0,2);
    addadj(adj,1,2);
    addadj(adj,1,3);
    addadj(adj,2,3);
    addadj(adj,2,4);
    addadj(adj,4,3);
    
    bool visited[v]={false};
    int cnt=0;
    for(int i=0;i<v;i++){    //if graph is disconnected  
        if(visited[i]==false)
             dfs(adj,0,visited);
             cnt++; //want to count the no. of connected component in indirected graph
    }
   
    return 0;
}