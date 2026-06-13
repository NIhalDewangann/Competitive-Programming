#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,h,l;
        cin>>n>>h>>l;
        int arr[n+1]={0};
        int a=0;
        int b=0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            if(arr[i]<=h)
            a++;
            if(arr[i]<=l)
            b++;
        }
        cout<<min({a,b,max(a,b)/2})<<endl;
    }
    return 0;
}
