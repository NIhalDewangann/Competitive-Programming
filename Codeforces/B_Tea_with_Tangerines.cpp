#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (auto &x : a) cin >> x;
        sort(a.begin(), a.end());
        long long mn = a[0];
        long long ans = 0;
        for (int i = 1; i < n; i++) {
            long long k = (a[i] + (2 * mn - 2)) / (2 * mn - 1); 
            ans += (k - 1);
        }

        cout << ans << '\n';
    }

    return 0;
}