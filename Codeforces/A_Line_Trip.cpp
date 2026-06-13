#include<bits/stdc++.h>
using namespace std;
int solve(int n,int x){
    vector<long long> gas(n);
    gas.push_back(0);
    for(int i=0;i<n;i++)
    {
        long long point;
        cin>>point;
        gas.push_back(point);
    }
    gas.push_back(x);
    n=gas.size();
    long long dist=INT_MIN;
    for(int i=1;i<n;i++){
        if(i==n-1)
        dist=max(dist,2*(gas[i]-gas[i-1]));
        else
        dist=max(gas[i]-gas[i-1],dist);
    }
    return dist;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int ans=solve(n,x);
        cout<<ans<<"\n";
    }
}