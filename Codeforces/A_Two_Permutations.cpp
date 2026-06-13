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
    int t ;
    cin >> t;
    while (t--) {
    int n,a,b;
    cin>>n>>a>>b;
    if((a+b+2<=n) || (a==b && b==n))
    cout<<"Yes"<<"\n";
    else
    cout<<"No"<<"\n";
    }
    return 0;
}