#include <bits/stdc++.h>
using namespace std;

void solve() {
        int n;
        cin >> n;
        string t;
        string b;
        cin >> t;
        cin >> b;
        int f_t = 0;
        int b_t = 0;
        for(int i = 0;i < n;i++){
            if(t[i] == 'f'){
                f_t++;
            }
        }
        for(int i = 0;i < n;i++){
            if(b[i] == 'f'){
                b_t++;
            }
        }
        if(f_t == b_t){
            cout << 0 << "\n";
            return;
        }
        string s = (f_t > b_t) ? t : b;
        int i = 0;
        int fgs = 0;
        while(i < n){
            if(i + 1 < n && s[i] == 'f' && s[i + 1] == 'f'){
                fgs++;
                i += 2;
            }else{
                i++;
            }
        }
        int d = abs(f_t - b_t);

        int ans = max(d % 2 , d - 2 * fgs);
        cout << ans << "\n";
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