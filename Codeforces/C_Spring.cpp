#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll lcm_val(ll x,ll y){
    return (x/__gcd(x,y))*y;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){

        ll a,b,c,m;
        cin>>a>>b>>c>>m;

        ll ab=lcm_val(a,b);
        ll ac=lcm_val(a,c);
        ll bc=lcm_val(b,c);
        ll abc=lcm_val(ab,c);

        ll abv=m/ab;
        ll acv=m/ac;
        ll bcv=m/bc;
        ll abcv=m/abc;

        ll a1=m/a - abv - acv + abcv;
        ll b1=m/b - abv - bcv + abcv;
        ll c1=m/c - acv - bcv + abcv;

        ll ab1=abv-abcv;
        ll ac1=acv-abcv;
        ll bc1=bcv-abcv;

        ll one = a1*6 + ab1*3 + ac1*3 + abcv*2;
        ll two = b1*6 + ab1*3 + bc1*3 + abcv*2;
        ll three = c1*6 + ac1*3 + bc1*3 + abcv*2;

        cout<<one<<" "<<two<<" "<<three<<"\n";
    }
}