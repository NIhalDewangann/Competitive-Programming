#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(2 * n);
    
    int p1 = -1, p2 = -1;
    for (int i = 0; i < 2 * n; i++) {
        cin >> a[i];
        if (a[i] == 0) {
            if (p1 == -1) p1 = i;
            else p2 = i;
        }
    }
    auto get_max_mex = [&](int l, int r) {
        while (l >= 0 && r < 2 * n && a[l] == a[r]) {
            l--;
            r++;
        }
        l++; 
        r--;
        if (l > r) return 0;
        vector<bool> present(n + 1, false);
        for (int i = l; i <= r; i++) {
            if (a[i] <= n) {
                present[a[i]] = true;
            }
        }
        
        int mex = 0;
        while (present[mex]) {
            mex++;
        }
        return mex;
    };

    int max_possible_mex = 0;
    max_possible_mex = max(max_possible_mex, get_max_mex(p1, p1)); 
    max_possible_mex = max(max_possible_mex, get_max_mex(p2, p2)); 
    max_possible_mex = max(max_possible_mex, get_max_mex((p1 + p2) / 2, (p1 + p2 + 1) / 2)); 

    cout << max_possible_mex << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}