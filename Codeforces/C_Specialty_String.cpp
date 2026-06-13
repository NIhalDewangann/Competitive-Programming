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
        stack<int> st;
        for(int i=0;i<n;i++){
            if(!st.empty() && st.top()==s[i])
            st.pop();
            else
            st.push(s[i]);
        }
        if(st.empty())
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}