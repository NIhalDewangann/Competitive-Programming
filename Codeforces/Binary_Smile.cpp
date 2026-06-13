#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void solve(){
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        vector<int>pa,pb;
        for(int i=0;i<n;i++){
            if(a[i]=='1') pa.push_back(i);
            if(b[i]=='1') pb.push_back(i);
        }
        if(pa.size()!=pb.size()){
            cout<<-1<<"\n";
            return;
        }
        int ans=0;
        for(int i=0;i<(int)pa.size();i++){
            if(pa[i]!=pb[i]) ans++;
        }
        cout<<ans<<"\n";
    }
};

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    Solution s;
    while(t--){
        s.solve();
    }
    return 0;
}