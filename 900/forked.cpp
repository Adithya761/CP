#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    long long a, b;
    cin >> a >> b;
    long long kx, ky;
    cin >> kx >> ky;
    long long qx, qy;
    cin >> qx >> qy;

    vector<pair<long long, long long>> moves = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };

    set<pair<long long, long long>> king_attacks;
    for (auto m : moves) {
        king_attacks.insert({kx + m.first, ky + m.second});
    }

    set<pair<long long, long long>> queen_attacks;
    for (auto m : moves) {
        queen_attacks.insert({qx + m.first, qy + m.second});
    }

    int res = 0;
    for (auto pos : king_attacks) {
        if (queen_attacks.count(pos)) {
            res++;
        }
    }

    cout << res << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) solve();

    return 0;
}