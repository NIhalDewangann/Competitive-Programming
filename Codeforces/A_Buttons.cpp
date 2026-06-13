#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        if (c % 2 == 0) {
            if (a > b)
                cout << "First" << endl;
            else
                cout << "Second" << endl;
        } 
        else {
            if (b > a)
                cout << "Second" << endl;
            else
                cout << "First" << endl;
        }
    }
    return 0;
}
