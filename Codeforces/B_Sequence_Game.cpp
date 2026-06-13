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
       vector<int> b(n);
       for(int i=0;i<n;i++)
       cin>>b[i];
       vector<int> a;
       a.push_back(b[0]);
       for(int i=1;i<n;i++){
        if(b[i]>=b[i-1])
        a.push_back(b[i]);
        else{
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
       }
       cout<<a.size()<<"\n";
       for(auto& it:a)
       cout<<it<<" ";
       
       cout<<"\n";
    }
    return 0;
}