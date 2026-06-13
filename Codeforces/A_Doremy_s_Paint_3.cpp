#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        unordered_map<int,int> mp;
        for(int i = 0; i < n; i++){
            int el;
            cin >> el;
            mp[el]++;
        }
        if(mp.size() > 2){
            cout << "NO\n";
        }
        else if(mp.size() == 1){
            cout << "YES\n";
        }
        else {
            vector<int> freq;
            for(auto &p : mp)
                freq.push_back(p.second);

            if(abs(freq[0] - freq[1]) <= 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }
    return 0;
}
