#include <bits/stdc++.h>
using namespace std;

int ask(int i, int j) {
    cout << "? " << i << " " << j << endl;
    cout.flush();
    int x;
    cin >> x;
    if (x == -1) exit(0);
    return x;
}

void solve() {
    int n;
    cin >> n;

    // Step 1: check left half
    for (int i = 2; i <= n; i++) {
        if (ask(1, i) == 1) {
            cout << "! " << 1 << endl;
            cout.flush();
            return;
        }
    }

    // Step 2: 1 is non-zero

    // Step 3 + 4: find zero pair in right half
    for (int i = n+1; i <= 2*n; i += 2) {
        if (i+1 <= 2*n && ask(i, i+1) == 1) {
            cout << "! " << i << endl;
            cout.flush();
            return;
        }
    }

    // fallback (should never happen)
    cout << "! " << (n+1) << endl;
    cout.flush();
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}