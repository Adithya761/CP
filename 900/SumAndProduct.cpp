#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long get_sqrt(long long D) {
    if (D < 0) return -1;
    long long low = 0, high = 2000000000LL;
    long long root = -1;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid * mid <= D) {
            root = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return (root != -1 && root * root == D) ? root : -1;
}

long long count_freq(const vector<long long>& a, long long val) {
    auto range = equal_range(a.begin(), a.end(), val);
    return distance(range.first, range.second);
}

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int q;
    cin >> q;
    while (q--) {
        long long x, y;
        cin >> x >> y;

        long long D = x * x - 4LL * y;
        long long d_sqrt = get_sqrt(D);

        if (d_sqrt == -1) {
            cout << 0 << (q == 0 ? "" : " ");
            continue;
        }

        if ((x + d_sqrt) % 2 != 0) {
            cout << 0 << (q == 0 ? "" : " ");
            continue;
        }

        long long u = (x - d_sqrt) / 2;
        long long v = (x + d_sqrt) / 2;

        long long ans = 0;
        if (u == v) {
            long long cnt = count_freq(a, u);
            ans = cnt * (cnt - 1) / 2;
        } else {
            long long cnt_u = count_freq(a, u);
            long long cnt_v = count_freq(a, v);
            ans = cnt_u * cnt_v;
        }

        cout << ans << (q == 0 ? "" : " ");
    }
    cout << "\n";
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