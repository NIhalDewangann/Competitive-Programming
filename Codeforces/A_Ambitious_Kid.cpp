#include<bits/stdc++.h>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<int> arr(n);
        int op=INT_MAX;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            op=min(op,abs(arr[i]-0));
        }
        cout<<op<<"\n";
        return 0;
}
