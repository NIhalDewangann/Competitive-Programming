#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        vector<long long> copya=arr;
        sort(copya.begin(),copya.end());
        if(copya==arr || k>1)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}