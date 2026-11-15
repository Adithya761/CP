#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> A(n);
    long long sum = 0;
    bool allOne = true;
    bool one_bet = false;
    for(int i = 0; i < n; i++) {
        cin >> A[i];
        sum += A[i];
        if(A[i] > 1) {
            allOne = false;
            if(i > 0 && i < n-1) {
                one_bet = true;
            }
        }
    }
    if(allOne) {
        cout << -1 << "\n";
    }
    else if(one_bet) {
        cout << sum - 1 << "\n";
    }
    else {
        cout << sum - (n -1) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}