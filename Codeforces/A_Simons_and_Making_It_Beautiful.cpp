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
        int mi=0;
        vector<int> arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        int maxx=INT_MIN;
        for(int i=1;i<=n;i++){
            if(arr[i]>maxx){
                maxx=arr[i];
                mi=i;
            }
        }
        swap(arr[1],arr[mi]);
        for(int i=1;i<=n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}