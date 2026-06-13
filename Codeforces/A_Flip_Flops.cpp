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
    ll c, k;
    cin >> n >> c >> k;

    vector<ll> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(all(a));

    for (int i = 0; i < n; i++) {
        if (a[i] > c) break;

        ll can_use = c - a[i];
        ll use = min(k, can_use);

        c += a[i] + use;
        k -= use;
    }

    cout << c << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}