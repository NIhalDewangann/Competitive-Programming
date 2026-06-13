#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define endl '\n'

const int MOD = 1e9 + 7;
const ll INF = 1e18;

int solve(string x,string s){
    int count=0;
    bool found=false;
   for(int i=0;i<6;i++){
    if(x.find(s) != string::npos){
        found=true;
        return count;
    }
    else{
        x+=x;
        count++;
    }
   }
if(found==true)
return count;
else
return -1;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t ;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;
        string s;
        cin>>s;
        cout<<solve(x,s)<<"\n";
    }

    return 0;
}