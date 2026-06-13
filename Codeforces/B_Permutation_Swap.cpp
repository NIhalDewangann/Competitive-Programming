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
    vector<int> arr(n+1);
    for(int i=1;i<=n;i++)
    cin>>arr[i];
    int ans=0;
    for(int i=1;i<=n;i++){
        if(i!=arr[i]){
             ans = __gcd(ans, abs(i - arr[i]));
        }
    }
    cout<<ans<<"\n";
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