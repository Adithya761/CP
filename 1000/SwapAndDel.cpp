#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    string s;
    cin >> s;
    int cnt0 = 0;
    int cnt1 = 0;
    int n = s.size();
    for(int i = 0;i < n;i++){
        if(s[i] == '1'){
            cnt1++;
        }else{
            cnt0++;
        }
    }
    int t = 0;
    for(int i = 0;i < n;i++){
        if(s[i] == '1' && cnt0 > 0){
            t++;
            cnt0--;   
        }else if(s[i] == '0' && cnt1 > 0){
            t++;
            cnt1--;
        }else{
            break;
        }
    }
    cout << n - t << "\n";
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