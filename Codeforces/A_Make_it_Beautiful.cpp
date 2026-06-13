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
      vector<int> arr(n);
        for(int i=0;i<n;i++){
           cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int minn=arr[0];
        int maxx=arr[n-1];
        if(minn==maxx){
            cout<<"NO"<<"\n";
        }
        else{
             cout<<"YES"<<"\n";
                cout<<arr[n-1]<<" ";
                for(int i=0;i<n-1;i++)
                cout<<arr[i]<<" ";
                cout<<"\n";
        }
    }
    return 0;
}