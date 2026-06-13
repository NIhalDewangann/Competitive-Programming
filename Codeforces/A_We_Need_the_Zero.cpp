#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve(){
    int n;
    cin>>n;
    ll total_xor=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        total_xor^=x;
    }
    if(n%2==1)
    cout<<total_xor<<endl;
    else{
        if(total_xor==0) cout<<0<<endl;
        else cout<<-1<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--) 
    solve();
    return 0;
}
