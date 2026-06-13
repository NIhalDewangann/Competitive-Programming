#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        int arr[s];
        int maxx=0;
        for(int i=0;i<s;i++){
            cin>>arr[i];
            maxx=max(arr[i],maxx);
        }
        cout<<maxx*s<<endl;;
    }
    return 0;
}