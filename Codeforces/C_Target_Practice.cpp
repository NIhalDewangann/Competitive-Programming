#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int ans=0;
        int arr[10][10]={{1,1,1,1,1,1,1,1,1,1},{1,2,2,2,2,2,2,2,2,1},{1,2,3,3,3,3,3,3,2,1},{1,2,3,4,4,4,4,3,2,1},{1,2,3,4,5,5,4,3,2,1},{1,2,3,4,5,5,4,3,2,1},{1,2,3,4,4,4,4,3,2,1},{1,2,3,3,3,3,3,3,2,1},{1,2,2,2,2,2,2,2,2,1},{1,1,1,1,1,1,1,1,1,1}};
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                char symbol;
                cin>>symbol;
                if(symbol=='X')
                ans+=arr[i][j];
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}