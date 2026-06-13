#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve(){
    int x,y;
    cin>>x>>y;
    if(x%2==1 && y%2==1)
    cout<<"NO"<<"\n";
    else 
    cout<<"YES"<<"\n";
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