#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int s;
        cin>>s;
        vector<int> arr(s,0);
        int op=0;
        int neg=0;
        for(int i=0;i<s;i++){
            cin>>arr[i];
            if(arr[i]==0)
            op+=1;
            else if(arr[i]==-1)
            neg++;
        }
        if(neg%2==1)
        op+=2;
        cout<<op<<endl;
    }
}