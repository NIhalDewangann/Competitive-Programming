
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int changes = 0;
        for(int i = 1; i < n; i++) {
            if(s[i] != s[i-1])
                changes++;
        }

        if(changes == n-1)
            cout << n << endl;
        else
            cout << changes + 1 << endl;
    }
}