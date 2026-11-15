#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    long long n;
    cin >> n;
    int last = 0;
    int len = 0;
    while(n > 0){
        last = n;
        ++len;
        n = n /10;
    }
    long long ans = 9 * (len -1) + last;

    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}