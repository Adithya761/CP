#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long l , r;
    cin >> l >> r;

    int mod = 998244353;
    long long res = 0;
    for(long long i = l; i <= r; i++) {
        if(i == 0){
            continue;
        }
        int x = -1;
        for(int bit = 62; bit >= 0; bit--) {
            if((i >> bit) & 1) {
                x = bit + 1;
                break;
            }
        }
        long long msk = (1LL << x) - 1;
        long long v = msk - i;
        long long a = x + v;    

        res = (res + a) % mod;
        if(res < 0) res = res + mod;
    }

    cout << res << '\n';
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