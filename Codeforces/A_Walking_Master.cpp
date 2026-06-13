c#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (d < b) {
            cout << -1 << "\n";
            continue;
        }
        long long diag = d - b;          
        long long new_x = a + diag;      
        if (new_x < c) {
            cout << -1 << "\n";
            continue;
        }
        long long left = new_x - c;  
        cout << diag + left << "\n";
    }
}
