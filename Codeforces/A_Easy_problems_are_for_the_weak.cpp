#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){
    ll n,d;cin>>n>>d;
    ll T=d*60;
    ll easy=0,hard=0;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x) easy++;
        else hard++;
    }
    ll ans=min(easy,T/30);
    if(hard>0 && T>=120){
        ll rem=T-120;
        ll e=min(easy,rem/15);
        rem-=e*15;
        ll h=min(hard-1,rem/120);
        ans=max(ans,1+e+h);
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--) solve();
    return 0;
}
