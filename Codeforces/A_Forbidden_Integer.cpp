#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve(int n,int k,int x){
    if(x!=1){
        cout<<"YES"<<"\n";
        cout<<n<<"\n";
        for(int i=0;i<n;i++){
            cout<<1<<" ";
        }
        cout<<"\n";
    }
    else if((k==1) || (k==2 && n%2==1)){
        cout<<"NO"<<"\n";
    }
    else{
        cout<<"YES"<<"\n";
        if(n%2==0){
            cout<<n/2<<"\n";
            for(int i=0;i<n/2;i++)
            cout<<2<<" ";
            cout<<endl;
        }
        else {
            cout<<(n-3)/2+1<<"\n";
            for(int i=0;i<(n-3)/2;i++)
            cout<<"2"<<" ";
            cout<<"3"<<endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t ;
    cin >> t;
    while (t--) {
        int n,k,x;
        cin>>n>>k>>x;
        solve(n,k,x);
    }

    return 0;
}