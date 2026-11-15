#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    vector<int> e, o, res;

    if (n == 1) {
        cout << -1 << '\n';
        return;
    }

    for (int i = 1; i <= n; i++) {
        if (i & 1) o.push_back(i);
        else e.push_back(i);
    }

    int i = 0, j = 0;

    for (int k = 1; k <= n; k++) {
        if ((k & 1) && i < e.size()) {
            res.push_back(e[i++]);
        }
        else if (j < o.size()) {
            res.push_back(o[j++]);
        }
        else if (i < e.size()) {
            res.push_back(e[i++]);
        }
    }

    for (int x : res) {
        cout << x << " ";
    }
    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}