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
        int arr[n]={0};
        int ans=0;
        int maxx=INT_MIN;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            maxx=max(arr[i],maxx);
        }
        for(int i=0;i<n;i++){
            if(arr[i]==maxx)
            ans++;
        }
        cout<<ans<<"\n";
    }

    return 0;
}