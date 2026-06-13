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
       bool ans=false;
       for(int i=0;i<n;i++){
        int el;
        cin>>el;
        if(el==67)
        ans=true;
       }
       if(ans==true)
       cout<<"YES"<<"\n";
       else
       cout<<"NO"<<"\n";
    }

    return 0;
}