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
        int count=0;
        int first=0;
        while(n>0){
            count++;
            first=n;
            n=n/10;
        }
        int ans=(count-1)*9+first;
        cout<<ans<<"\n";
    }

    return 0;
}