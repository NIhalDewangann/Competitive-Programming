#include<bits/stdc++.h>
using namespace std;
int solve(long long n,long long w){
    if(w==1)
    return 0;
    long long ans=n-(n/w);
    return ans;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,w;
        cin>>n>>w;
        long long ans=solve(n,w);
        cout<<ans<<"\n";
    }
}
