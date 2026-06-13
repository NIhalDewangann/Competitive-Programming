#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<bool> awake(n,false);
        for(int i=0;i<s.length();i++){
            if(s[i]=='1'){
                awake[i]=true;
                for(int j=1;j<=k && (i+j)<s.length();j++)
                {
                    awake[i+j]=true;
                }
            }
        }
        int ans=0;
        for(int i=0;i<awake.size();i++)
        {
            if(awake[i]==true)
            ans++;
        }
        cout<<n-ans<<endl;
    }
}