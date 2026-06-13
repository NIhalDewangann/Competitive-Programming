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
    int t ;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int flag=0;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(arr[i],arr[j])<=2)
                flag=1;
            }
        }
        if(flag==0)
        cout<<"No"<<"\n";
        else
        cout<<"Yes"<<"\n";
    }
    return 0;
}