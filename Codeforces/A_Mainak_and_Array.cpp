#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    long long n;
    cin>>n;
    vector<long long> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    long long ans=a[n-1]-a[0];
    for(int i=1;i<n;i++){
        ans=max(ans,a[i]-a[0]);
    }
     for(int i=1;i<n;i++){
        ans=max(ans,a[n-1]-a[i]);
    }
     for(int i=0;i<n-1;i++){
        ans=max(ans,a[i]-a[i+1]);
    }
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