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
    int open=0;
    int close=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(')
        open++;
        else
        close++;
    }
    if(open==close)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
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