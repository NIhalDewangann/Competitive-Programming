#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            cout<<n+1-el<<" ";
        }
        cout<<"\n";
    }
    return 0;
}