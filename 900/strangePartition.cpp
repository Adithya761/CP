#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n , x;
    cin >> n >> x;
    vector<long long> A(n);
    for(int i = 0;i < n;i++){
        cin >> A[i];
    }
    long long ri = 0;
    long long sum = 0;
    for(long long &y : A){
        sum += y;
        long long v = (y + x - 1)/x;
        ri += v;
    }

    long long lo = (sum + x - 1)/x;
    cout << lo << " " << ri << "\n";
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