#include<bits/stdc++.h>
using namespace std;
int solve(int n,string s){
    bool three=false;
    int empty=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='.' && i+1<n && s[i+1]=='.' && i+2<n && s[i+2]=='.')
        {
            three=true;
            break;
        }
        if(s[i]=='.')
        empty++;
    }
    if(three==true)
    return 2;
    else
    return empty;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=solve(n,s);
        cout<<ans<<"\n";
    }
}