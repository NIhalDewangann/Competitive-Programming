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
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        vector<int> b;
        vector<int>  c;
        int maxx=*max_element(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]!=maxx){
                b.push_back(arr[i]);
            }
            else{
                c.push_back(arr[i]);
            }
        }
        if(b.size()==0)
        cout<<"-1"<<"\n";
        else{
            cout<<b.size()<<" ";
            cout<<c.size()<<"\n";
            for(auto& it:b)
            cout<<it<<" ";
            cout<<"\n";
            for(auto& it:c)
            cout<<it<<" "<<"\n";
        }
    }
    return 0;
}