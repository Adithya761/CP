#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    vector<int> vis(n + 1 , 0);
    stack<int> st;

    for(int i = 0;i < n;i++){
        if(s[i] == '1'){
            st.push(i + 1);
        }
        else{
            if(s[i] == '2'){
                if(!st.empty()){
                    vis[st.top()] = 1;
                    st.pop();
                }else{
                    vis[i + 1] = 1;
                }
            }else{
                vis[i + 1] = 1;
            }
        }
    }
    int cnt = 0;
    vector<int> A;
    for(int i = 1;i <= n;i++){
        if(vis[i] == 0){
            cnt++;
            A.push_back(i);
        }
    }
    cout << cnt << "\n";

    for(int i = 0;i < A.size();i++){
        cout << A[i] << " ";
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