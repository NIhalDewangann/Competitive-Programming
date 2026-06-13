#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> f(26,0);
        for(char c:s){
            int idx=tolower(c)-'a';
            f[idx]++;
        }
        sort(f.rbegin(),f.rend());
        cout<<f[0]+f[1]<<"\n";
    }
    return 0;
}
