#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    string a;
    cin >> a;
    int st = -1;
    int end = -1;
    int cnt = 0;
    for(int i = 1;i <= n;i++){
        if(a[i -1] == '1'){
            if(st == -1){
                st = i;
            }
            end = i;
            ++cnt;
        }
    }
    if(cnt <= 1){
        cout << 0 << "\n";
    }else if(cnt == 2){
        cout << 1 << "\n";
    }else{
        cout << end - st << "\n";
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