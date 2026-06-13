#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n,0);
        for(int i=n-1,j=1;i>=0;i-=2){
            arr[i]=j++;
        }
        for(int i=n-2,j=n;i>=0;i-=2){
            arr[i]=j--;
        }
        for(auto& el:arr)
        cout<<el<<" ";
        cout<<endl;
    }
}