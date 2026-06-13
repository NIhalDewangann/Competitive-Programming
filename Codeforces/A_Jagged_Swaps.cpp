#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n+1);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        if(arr[1]==1)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
    return 0;
}