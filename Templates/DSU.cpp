#include<bits/stdc++.h>
using namespace std;
class DisJointSet{
    vector<int> rank,parent,size;
    public:
    DisJointSet(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }
    int findparent(int node){
        if(parent[node]==node)
        return node;
        return parent[node]=findparent(parent[node]);
    }
    void unionbyrank(int u,int v){
        int ulpu=findparent(u);
        int ulpv=findparent(v);
        if(ulpu==ulpv)
        return ;
        else if(rank[ulpu]<rank[ulpv]){
                parent[ulpu]=ulpv;
        }
        else if(rank[ulpv]<rank[ulpu]){
            parent[ulpv]=ulpu;
        }
        else{
            parent[ulpv]=ulpu;
            rank[ulpu]++;
        }
    }
    void unionbysize(int u,int v){
        int ulpu=findparent(u);
        int ulpv=findparent(v);
        if(ulpu==ulpv)
        return ;
        else if(size[ulpu]<size[ulpv]){
            parent[ulpu]=ulpv;
            size[ulpv]+=size[ulpu];
        }
        else{
            parent[ulpv]=ulpu;
            size[ulpu]+=size[ulpv];
        }
    }
};
int main(){
    DisJointSet ds(7);
    ds.unionbysize(1,2);
    ds.unionbysize(2,3);
    ds.unionbysize(4,5);
    ds.unionbysize(6,7);
    ds.unionbysize(5,6);
    if(ds.findparent(3)==ds.findparent(7))
    cout<<"YES"<<"\n";
    else
    cout<<"No"<<"\n";
    ds.unionbysize(3,7);
    if(ds.findparent(3)==ds.findparent(7))
    cout<<"YES\n";
    else
    cout<<"NO\n";
    return 0;
}