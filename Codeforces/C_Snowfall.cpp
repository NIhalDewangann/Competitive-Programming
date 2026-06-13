#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, x;
    cin >> n;
    
    vector<int> b, d, c, a;
    
    while (n--) {
        cin >> x;
        if (x % 6 == 0) 
        a.push_back(x);
        else if (x % 3 == 0) 
        b.push_back(x);
        else if (x % 2 == 0) 
        c.push_back(x);
        else 
        d.push_back(x);
    }
    
    for (int i : b)
     cout << i << " ";
    for (int i : d) 
    cout << i << " ";
    for (int i : c) 
    cout << i << " ";
    for (int i : a)
    cout << i << " ";
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) solve();
}