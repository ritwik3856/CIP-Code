#include<iostream>
#include<vector>
#include<queue>
using namespace std;
/* creating a visited boolean array of vertices which keep track of visited element then traversing the adj list
printing the first friend then its friend then its friend and putting true if it is visited.*/
void bfs(vector<int> adj[],int v,int s){ 
      bool visited[v]={false}; 
      queue<int>q;
      q.push(s);
      visited[s]=true;
      while(!q.empty()){

        int u=q.front();
        q.pop();
        cout<<u<<" ";

        for(auto v:adj[u]){
            if(visited[v]==false){
                visited[v]=true;
                q.push(v);
            }
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
    
    int s=0;
    bfs(adj,v,s);

    return 0;
}