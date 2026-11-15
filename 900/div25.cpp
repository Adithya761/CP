#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int sz = s.size();
    
    vector<string> patterns = {"00", "25", "50", "75"};
    int min_steps = sz;

    for (string p : patterns) {
        char y = p[1];
        char x = p[0];
        
        int idx_y = -1;
        for (int i = sz - 1; i >= 0; i--) {
            if (s[i] == y) {
                idx_y = i;
                break;
            }
        }
        
        if (idx_y == -1) continue;
        
        int idx_x = -1;
        for (int i = idx_y - 1; i >= 0; i--) {
            if (s[i] == x) {
                idx_x = i;
                break;
            }
        }
        
        if (idx_x == -1) continue;
        
        int steps = (sz - 1 - idx_y) + (idx_y - idx_x - 1);
        min_steps = min(min_steps, steps);
    }

    cout << min_steps << "\n";
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