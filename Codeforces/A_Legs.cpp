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
        int ans=0;
        if(n>=4){
            ans+=n/4;
            n=n%4;
        }
        if(n>0){
            ans+=n/2;
        }
        cout<<ans<<"\n";
    }

    return 0;
}