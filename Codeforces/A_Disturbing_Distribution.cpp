#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long s = 0;
    int count1 = 0;
    int last_one_idx = -1;
    int last_gt_one_idx = -1;

    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        if (val == 1) {
            count1++;
            last_one_idx = i;
        } else {
            s += val;
            last_gt_one_idx = i;
        }
    }

    long long ans = 0;
    
    if (count1 == 0) {
        ans = s;
    } else if (count1 == n) {
        ans = 1;
    } else {
        if (last_one_idx < last_gt_one_idx) {
            ans = s;
        } else {
            ans = s + 1;
        }
    }
    cout << ans % 676767677 << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}