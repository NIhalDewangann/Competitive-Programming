#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,h;
        cin>>n>>m>>h;
        vector<int> arr(n),copy(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            copy[i]=arr[i];
        }
        unordered_set<int> tochange;
        for(int i=0;i<m;i++){
            int b;
            int c;
            cin>>b>>c;
            b--;
            arr[b]+=c;
            tochange.insert(b);
            if(arr[b]>h)
            {
                for(auto p:tochange){
                    arr[p]=copy[p];
                }
                tochange.clear();
            }
        }
        for(auto ele:arr){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
} 