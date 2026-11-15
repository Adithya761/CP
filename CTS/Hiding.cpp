#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n , m;
    cin >> n >> m;
    if(n == 1){
        cout << 0 << "\n";
    }else{
        for(int i = 1;i < n;i++){
            cout << i << "\n";
            cout << i << " " << i  << "\n";
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}