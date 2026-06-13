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
        long long n;
        cin>>n;
        if((n&(n-1))==0)
        cout<<"NO"<<"\n";
        else
        cout<<"YES"<<"\n";
    }
    return 0;
}