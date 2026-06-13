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
        int sum=0;
        for(int i=0;i<n-1;i++)
        {
            int el;
            cin>>el;
            sum+=el;
        }
        cout<<0-sum<<"\n";
    }

    return 0;
}