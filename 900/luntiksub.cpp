#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> A(n);
    for(int i = 0;i < n;i++){
        cin >> A[i];
    }

    int one = 0;
    int zro = 0;
    for(int x : A){
        if(x == 1){
            one++;
        }
        if(x == 0){
            zro++;
        }
    }
    long long ans = one * (1LL << zro);
    cout << ans << "\n";
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