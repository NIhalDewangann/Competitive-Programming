#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}

void solve() {
    int n;
    cin >> n; 
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    int good_subarrays = 0;
    
    for (int i = 0; i < n - 1; ++i) {
        int diff = abs(p[i] - p[i+1]);
        int g = gcd(p[i], p[i+1]);
        
        if (diff == g) {
            good_subarrays++;
        }
    }

    cout << good_subarrays << "\n";
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