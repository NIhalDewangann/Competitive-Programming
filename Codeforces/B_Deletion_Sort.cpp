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
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int sorted=true;
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1])
            sorted=false;
        }
        if(sorted==true)
            cout<<n<<"\n";
        else
        cout<<"1"<<"\n";
    }
    return 0;
}