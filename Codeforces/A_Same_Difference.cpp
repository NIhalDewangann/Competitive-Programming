#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int op=0;
    for(int i=n-2;i>=0;i--){
        if(s[i]!=s[n-1])
        op++;
    }
    cout<<op<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}