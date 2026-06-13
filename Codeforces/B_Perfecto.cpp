#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;
bool isPerfectSquare(long long x) {
    long long s = sqrt(x);
    return s * s == x;
}
void solve() {
    int n;
    cin>>n;
    int total=(n/2)*(n+1)/2;
    if(isPerfectSquare(total)){
        cout<<"-1"<<"\n";
    }
    else{
        cout<<"2"<<" ";
        cout<<"1"<<" ";
        for(int i=2;i<n;i++)
        cout<<i+1<<" ";
        cout<<"\n";
    }
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