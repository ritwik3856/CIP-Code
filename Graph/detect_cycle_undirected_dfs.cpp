#include<iostream>
#include<vector>
#include<queue>
using namespace std;

bool dfs(vector<int> adj[],int s,bool visited[],int parent){ 
   visited[s]=true;

   for(auto v:adj[s]){
        if(visited[v]==false){
            if(dfs(adj,v,visited,s)==true)
            return true;
        }
        else if(parent!=v)
        return true;
   }
   return false;

}
void addEdge(vector<int>adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bool init_dfs(vector<int>adj[],int v){
    bool visited[v]={false};

    for(int i=0;i<v;i++){
        if(visited[i]==false){
            if(dfs(adj,i,visited,-1)==true)
            return true;
        }
    }
    return false;
}
int main(){
    int v=6;
    vector<int>adj[v];
    addEdge(adj,0,1); 
	addEdge(adj,1,2); 
	addEdge(adj,2,4); 
	addEdge(adj,4,5); 
	addEdge(adj,1,3);
	addEdge(adj,2,3);
    
    cout<<init_dfs(adj,v);
   return 0;
}