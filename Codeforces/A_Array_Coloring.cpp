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
        for(int i=0;i<n;i++){
            int el;
            cin>>el;
            if(el%2==1)
            count++;
        }
        if(count%2==0)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }

    return 0;
}