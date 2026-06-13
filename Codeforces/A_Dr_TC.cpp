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
        string s;
        cin>>s;
        int ones=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1')
            ones++;
        }
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                ans+=ones;
                ans--;
            }
            else{
                ans+=ones;
                ans++;
            }
        }
        cout<<ans<<"\n";
    }

    return 0;
}