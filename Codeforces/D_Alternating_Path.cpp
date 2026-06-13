#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> g(n + 1);

    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }

    vector<int> col(n + 1, -1);
    int ans = 0;

    for (int i = 1; i <= n; i++) {

        if (col[i] != -1) continue;

        queue<int> q;
        q.push(i);
        col[i] = 0;

        int cnt[2] = {0, 0};
        bool ok = true;

        while (!q.empty()) {
            int node = q.front();
            q.pop();

            cnt[col[node]]++;

            for (auto it : g[node]) {

                if (col[it] == -1) {
                    col[it] = 1 - col[node];
                    q.push(it);
                }
                else if (col[it] == col[node]) {
                    ok = false;
                }
            }
        }

        if (ok) ans += max(cnt[0], cnt[1]);
    }

    cout << ans << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}