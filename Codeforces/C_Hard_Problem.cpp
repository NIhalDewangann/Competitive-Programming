#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m,a,b,c;
        cin>>m>>a>>b>>c;
        int row1=m;
        int row2=m;
        int ans=0;
        if(a<row1)
        {
            ans+=a;
            row1=row1-a;
        }
        else
        {
            ans+=row1;
            row1=0;
        }
        if(b<row2){
            ans+=b;
            row2-=b;
        }
        else
        {
            ans+=row2;
            row2=0;
        }
        if(c<(row1+row2))
        ans+=c;
        else
        ans+=row1+row2;
        cout<<ans<<"\n";
    }
}