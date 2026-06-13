#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve(){
    int n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    bool ok=true;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            ok=false;
            break;
        }
    }
    if(!ok){
        cout<<0<<endl;
        return;
    }
    ll ans=INF;
    for(int i=0;i<n-1;i++){
        ll diff=a[i+1]-a[i];
        ll ops=diff/2+1;
        ans=min(ans,ops);
    }
    cout<<ans<<endl;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
        solve();
}
