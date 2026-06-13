#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
long long target, min_diff;
void check(long long val) {
    long long diff = (val > target) ? (val - target) : (target - val);
    if (min_diff == -1 || diff < min_diff) {
        min_diff = diff;
    }
}
void solve() {
    int n;
    cin >> target >> n;
    vector<int> d(n);
    for (int i = 0; i < n; i++) {
        cin >> d[i];
    }
    min_diff = -1;
    string s = to_string(target);
    int len = s.length();
    if (len > 1) {
        long long val = 0;
        for (int i = 0; i < len - 1; i++) {
            int digit = (i == 0 && d[0] == 0) ? d[1] : d.back();
            val = val * 10 + digit;
        }
        check(val);
    }
        long long val = 0;
        for (int i = 0; i < len + 1; i++) {
            int digit = (i == 0 && d[0] == 0) ? d[1] : d[0];
            val = val * 10 + digit;
        }
        check(val);
    long long prefix = 0;
    bool exact_match = true;
    for (int i = 0; i < len; i++) {
        int curr_digit = s[i] - '0';
        for (int digit : d) {
            if (i == 0 && digit == 0 && len > 1) continue;
            if (digit < curr_digit) {
                long long val = prefix * 10 + digit;
                for (int j = i + 1; j < len; j++) val = val * 10 + d.back();
                check(val);
            } else if (digit > curr_digit) {
                long long val = prefix * 10 + digit;
                for (int j = i + 1; j < len; j++) val = val * 10 + d[0];
                check(val);
            }
        }
        if (find(d.begin(), d.end(), curr_digit) != d.end()) {
            prefix = prefix * 10 + curr_digit;
        } else {
            exact_match = false;
            break;
        }
    }
    if (exact_match) {
        check(target);
    }
    cout << min_diff << "\n";
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