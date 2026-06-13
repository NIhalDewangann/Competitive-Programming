#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        int maxi=-1;
        int index=-1;
        int tbr=-1;
        for(int i=n-2;i>=0;i--){
            if(arr[i]<arr[i+1] && arr[i+1]>maxi)
            {
                maxi=arr[i+1];
                index=i+1;
            }
            if(arr[i]<maxi)
            tbr=i;
        }
        if(index!=-1)
        reverse(arr.begin()+tbr,arr.begin()+index+1);
        for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
        cout<<endl;
    }
    return 0;
}