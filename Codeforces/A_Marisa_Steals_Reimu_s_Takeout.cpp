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
    vector<int> arr(n);
    int cnt0 = 0, cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else if(arr[i] == 2) cnt2++;
    }
    int ans = cnt0;
    int pairs = min(cnt1, cnt2);
    ans += pairs;
    cnt1 -= pairs;
    cnt2 -= pairs;
    ans += cnt1 / 3;
    ans += cnt2 / 3;
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