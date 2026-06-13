#include<bits/stdc++.h>
using namespace std;
int solve(int n,int y,int r){
   return min(n,y/2+r);
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,y,r;
        cin>>n>>y>>r;
        int ans=solve(n,y,r);
        cout<<ans<<"\n";
    }
}