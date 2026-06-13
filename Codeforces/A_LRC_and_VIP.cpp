#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int max_val = -1;
    int max_idx = -1;
    bool all_same = true;
    
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (i > 0 && a[i] != a[i-1]) {
            all_same = false;
        }
        if (a[i] > max_val) {
            max_val = a[i];
            max_idx = i;
        }
    }

    if (all_same) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        for (int i = 0; i < n; ++i) {
            if (i == max_idx) {
                cout << "1 ";
            } else {
                cout << "2 ";
            }
        }
        cout << "\n";
    }
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