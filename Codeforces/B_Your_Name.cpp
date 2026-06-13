#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        string s;
        string t;
        cin>>s;
        cin>>t;
        if(s.length() !=t.length()){
        cout<<"NO"<<endl;
        continue;
        }
        unordered_map<char,int> smap;
        unordered_map<char,int> tmap;
        for(int i=0;i<s.length();i++){
            smap[s[i]]++;
            tmap[t[i]]++;
        }
        if(smap==tmap)
        cout<<"YES"<<" ";
        else
        cout<<"NO"<<" ";
        cout<<endl;
    }
}