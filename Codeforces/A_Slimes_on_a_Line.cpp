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
    vector<long long> arr(n);
    long long mini=INT_MAX;
    long long maxi=INT_MIN;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mini=min(mini,arr[i]);
        maxi=max(maxi,arr[i]);
    }
    long long median=floor((maxi+mini)/2);
    int ans=max(median-mini,maxi-median);
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