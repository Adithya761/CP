#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    int m = n-4;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> P(m);
    map<long long , long long> mp;
    for(int i = 0;i < m;i++){
        P[i] = a[i] + a[i + 2] - a[i + 4];
        mp[P[i]]++;
    }
    long long tot = 0;
    for(auto it : mp){
        tot += (it.second * (it.second - 1)) / 2;
    }
    long long neg = 0;
    for(int i =0;i < m;i++){
        if(i + 2 < m && P[i] == P[i + 2]){
            neg++;
        }
        if(i + 4 < m && P[i] == P[i + 4]){
            neg++;
        }
    }
    cout << tot - neg << "\n";
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