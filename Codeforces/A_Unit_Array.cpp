#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int neg = 0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x == -1)
                neg++;
        }
        int ans = 0;
        if (neg <= n / 2) {
            if (neg % 2 != 0)
                ans = 1;
        } 
        else {
            ans = neg - (n / 2);
            neg -= ans;
            if (neg % 2 != 0)
                ans++;
        }

        cout << ans << "\n";
    }

    return 0;
}
