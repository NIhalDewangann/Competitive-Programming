#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

ll floorDiv2(ll x){
    if(x >= 0) return x / 2;
    return (x - 1) / 2;
}

ll ceilDiv2(ll x){
    if(x >= 0) return (x + 1) / 2;
    return x / 2;
}

void solve(){
    int n;
    cin >> n;

    vector<ll> a(n);
    for(auto &x : a) cin >> x;

    for(int i = 0; i < n; i++){
        vector<ll> up, down;

        for(int j = i + 1; j < n; j++){
            if(a[j] > a[i]){
                up.pb(floorDiv2(a[i] + a[j]) + 1);
            }
            else if(a[j] < a[i]){
                down.pb(ceilDiv2(a[i] + a[j]) - 1);
            }
        }

        sort(all(up));
        sort(all(down));

        int ans = max((int)up.size(), (int)down.size());

        int ptr = 0;

        for(int j = 0; j < (int)up.size(); j++){
            ll v = up[j];
            while(ptr < (int)down.size() && down[ptr] < v) ptr++;

            int cur = (j + 1) + ((int)down.size() - ptr);
            ans = max(ans, cur);
        }

        ptr = 0;
        for(int j = 0; j < (int)down.size(); j++){
            ll v = down[j];
            while(ptr < (int)up.size() && up[ptr] <= v) ptr++;

            int cur = ptr + ((int)down.size() - j);
            ans = max(ans, cur);
        }

        cout << ans << (i == n - 1 ? "" : " ");
    }

    cout << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) solve();

    return 0;
}