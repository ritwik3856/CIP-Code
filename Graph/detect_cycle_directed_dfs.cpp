#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool dfs(vector<int> adj[],int s,bool visited[],bool path[]){ 
   visited[s]=true;
   path[s]=true;

    for(auto v:adj[s]){
        if(!visited[v] && dfs(adj,s,visited,path))
            return true;    
        else if(path[v]==true)
        return true;
    }

    path[s]=false;

    return false;

}
void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
}
bool init_dfs(vector<int>adj[],int v){
    bool visited[v]={false};
    bool path[v]={false};
    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(dfs(adj,i,visited,path)==true)
            return true;
        }
    }
    return false;
}
int main(){
    int v=6;
    vector<int>adj[v];
    addEdge(adj,0,1); 
	addEdge(adj,2,1); 
	addEdge(adj,2,3); 
	addEdge(adj,3,4); 
	addEdge(adj,4,5);
	addEdge(adj,5,3);
    
    cout<<init_dfs(adj,v);

   return 0;
}