#include<bits/stdc++.h>
using namespace std;

class DisjointSet{
   vector<int>parent,size,rank;
    public:
   DisjointSet(int n){
        parent.resize(n+1);
        size.resize(n+1);
        rank.resize(n+1,0);
        for(int i=0;i<=n;i++){
            parent[i]=i;
            size[i]=1;
        }
   }

   int findUPar(int node){
        if(node==parent[node])
            return node;

        return parent[node]=findUPar(parent[node]);
   }

    void UnionByRank(int u,int v){
        int ulp_u=findUPar(u);
        int ulp_v=findUPar(v);
        if(ulp_u==ulp_v) return ;
        if(rank[ulp_u]<rank[ulp_v])
            parent[ulp_u]=ulp_v;
        else if(rank[ulp_v]<ulp_u)
            parent[ulp_v]=ulp_u;
        else{
            parent[ulp_v]=ulp_u;
            rank[ulp_u]++;1
        }
    }

    void UnionBySize(int u,int v){
        int ulp_u=findUPar(u);
        int ulp_v=findUPar(v);
         if(ulp_u==ulp_v) return;
        if(size[ulp_u]<size[ulp_v]){
            parent[ulp_u]=ulp_v;
            size[ulp_v]+=size[ulp_u];
        }
       
        else{
            parent[ulp_v]=ulp_u;
            size[ulp_u]+=size[ulp_v]; 
        }
    }

};

int main(){
    DisjointSet ds(7);
    ds.UnionBySize(1,2);
    ds.UnionBySize(2,3);
    ds.UnionBySize(4,5);
    ds.UnionBySize(6,7);
    ds.UnionBySize(5,6);

    if(ds.findUPar(3) == ds.findUPar(7))
    cout<<"Same";
    else
    cout<<"Not Same";

    ds.UnionBySize(3,7);

    if(ds.findUPar(3) == ds.findUPar(7))
    cout<<"Same";
    else
    cout<<"Not Same";

    return 0;
}

