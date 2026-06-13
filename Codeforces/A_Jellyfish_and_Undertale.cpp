#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int a, b, n;
    cin >> a >> b >> n;
    
    vector<int> arr(n);
    long long ans = b;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        ans += min(arr[i], a - 1);
    }

    cout << ans << "\n";
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