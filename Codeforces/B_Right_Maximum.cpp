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
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++)
        cin >> v[i];

    vector<int> best(n);
    best[0] = 0;

    for(int i = 1; i < n; i++) {
        if(v[i] >= v[best[i-1]])
            best[i] = i;
        else
            best[i] = best[i-1];
    }

    int cur = n - 1;
    int ans = 0;

    while(cur >= 0) {
        ans++;
        cur = best[cur] - 1;
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}