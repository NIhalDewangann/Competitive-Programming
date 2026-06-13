#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        vector<int> freq(2,0);
        for(int i=0;i<s.length();i++)
        freq[s[i]-'A']++;
        if(freq[0]>freq[1])
        cout<<"A"<<"\n";
        else
        cout<<"B"<<"\n";
    }
}