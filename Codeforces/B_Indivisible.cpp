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

    if (n == 1) {
        cout << 1 << "\n";
        return;
    }

    if (n % 2 == 1) {
        cout << -1 << "\n";
        return;
    }

    for (int i = 1; i <= n; i += 2) {
        cout << i + 1 << " " << i << " ";
    }
    cout << "\n";
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