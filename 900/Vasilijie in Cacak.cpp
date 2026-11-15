#include <bits/stdc++.h>
using namespace std;

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return 0;
}();

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        long long maxSum = 1LL*(n*(n+1))/2 - 1LL*((n-k)*(n-k+1))/2;
        long long minSum = 1LL*(k*(k+1))/2;

        if (x >= minSum && x <= maxSum) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
