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
    vector<long long> a(n);
    vector<long long> b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    long long ans=0;
    for(int i=0;i<n;i++){
        if(a[i]>b[i])
        swap(a[i],b[i]);
        ans+=max(a[i],b[i]);
    }
    int maxi=*max_element(a.begin(),a.end());
    ans+=maxi;
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