#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        int sixseven=n,ans=n;

        for(int i=0;i<n;i++){
            int l=0,r=0;
            for(int j=0;j<n;j++){
                if(a[j]<a[i]) l++;
                else if(a[j]>a[i]) r++;
            }
            ans=min(ans,max(l,r));
        }

        cout<<ans<<"\n";
    }
    return 0;
}