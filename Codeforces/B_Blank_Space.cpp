#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve(vector<int>& arr){
    int maxx=0;
    int count=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0)
        {
            count++;
            maxx=max(maxx,count);
        }
        else
        {
            count=0;
        }
    }
    cout<<maxx<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        solve(arr);
    }
    return 0;
}