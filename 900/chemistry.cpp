#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    unordered_map<char , int> mp;
    for(int i = 0;i < n;i++){
        mp[s[i]]++;
    }
    int cnt = 0;
    for(auto &it : mp){
        int v = it.second;
        cnt += (v & 1);
    }
    if(cnt <= k + 1){
        cout << "YES\n";
    }else{
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}