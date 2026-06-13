#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve(string s) {
    int ans=s.length();
    int l=0;
    int r=s.length()-1;
    while(l<r){
        if((s[l]=='1' && s[r]=='0') || (s[l]=='0' && s[r]=='1')){
            ans-=2;
            l++;
            r--;
        }
        else
        break;
    }
    cout<<ans<<"\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        solve(s);
    }

    return 0;
}