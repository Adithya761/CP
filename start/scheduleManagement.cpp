#include <bits/stdc++.h>
using namespace std;

bool check(long long mid, vector<int>& cnt) {
    long long need = 0;
    long long take = 0;

    for (int x : cnt) {
        if (x > mid) {
            need += x - mid;
        } 
        else {
            take += (mid - x) / 2;
        }
    }

    return take >= need;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> cnt(n, 0);

        for (int i = 0; i < m; i++) {
            int x;
            cin >> x;
            cnt[x - 1]++;
        }

        long long l = 0;
        long long r = m;

        while (l < r) {
            long long mid = l + (r - l) / 2;

            if (check(mid, cnt)) {
                r = mid;
            } 
            else {
                l = mid + 1;
            }
        }

        cout << l << '\n';
    }

    return 0;
}