#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long x,y;
        cin>>n>>x>>y;
        vector<long long> v(n);
        for(int i=0;i<n;i++)
        cin>>v[i];
        long long s=0;
        for(int i=0;i<n;i++)
        s+=v[i]/x;
        long long mx=0;
        for(int i=0;i<n;i++){
            long long cur=v[i]-(v[i]/x)*y;
            mx=max(mx,cur);
        }
        cout<<mx+s*y<<"\n";
    }
}
