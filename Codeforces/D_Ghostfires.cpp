#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int r, g, b;
        cin >> r >> g >> b;

        string s = "";

        while (true) {
            int best = -1;
            char choose = '#';

            vector<pair<int,char>> v = {
                {r, 'R'}, {g, 'G'}, {b, 'B'}
            };

            for (auto p : v) {
                int cnt = p.first;
                char c = p.second;

                if (cnt == 0) continue;

                int n = s.size();

                if (n >= 1 && s[n-1] == c) continue;
                if (n >= 3 && s[n-3] == c) continue;

                if (cnt > best) {
                    best = cnt;
                    choose = c;
                }
            }

            if (choose == '#') break;

            s.push_back(choose);

            if (choose == 'R') r--;
            else if (choose == 'G') g--;
            else b--;
        }

        cout << s << '\n';
    }
}