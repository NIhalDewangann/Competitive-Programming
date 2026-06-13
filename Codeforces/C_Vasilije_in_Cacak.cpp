#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    long long n,k,x;
    cin>>n>>k>>x;
    long long minsum=(k*(k+1))/2;
    long long maxsum=(n*(n+1))/2-((n-k)*(n-k+1))/2;
    if(x>=minsum && x<=maxsum)
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