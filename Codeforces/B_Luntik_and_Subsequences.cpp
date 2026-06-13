#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n;
    cin>>n;
    vector<int> a(n);
    int ones=0;
    int zero=0;
    for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1)
    ones++;
    else if(a[i]==0)
    zero++;
    }
    long long ans=pow(2,zero)*ones;
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}