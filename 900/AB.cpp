#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    int n = s.size();
    // vector<int> ab(n , 0);
    // int cnt = 0;
    // for(int i = 0;i < n - 1;i++){
    //     if(s.substr(i , 2) == "ab"){
    //         cnt++;
    //     }else if(s.substr(i , 2) == "ba"){
    //         cnt--;
    //     }
    //     ab[i] = cnt;
    // }
    // ab[n-1] = cnt;
    // if(ab[n-1] == 1){
    //     string res = s.substr(0 , n-2) + "a";
    //     cout << res << endl;
    // }else{
    //     cout << s << endl;
    // }
    if(s[0] == s[n-1]){
        cout << s << "\n";
    }else{
        cout << s.substr(0 , n-1) + s[0] << "\n";
    }
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