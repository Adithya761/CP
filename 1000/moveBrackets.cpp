#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int res = 0;
    stack<char> st;
    for(int i = 0;i < n;i++){
       if(s[i] == '('){
        st.push(s[i]);
       }else{
            if(!st.empty()){
                st.pop();
            }else{
                ++res;
            }
       }
    }
    cout << res << "\n";
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