#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n+1);
        vector<int> flag(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            flag[arr[i]]++;
        }
        if(flag[k]>0)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}