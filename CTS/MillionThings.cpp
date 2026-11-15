#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    long long n;
    cin >> n;
    vector<ll> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int odd = 0;
    int even = 0;

    for(int i = 0; i < n; i++){
        if(a[i] % 2 == 0){
            even++;
        }else{
            odd++;
        }
    }
    if(even == 0 && odd == 3){
        cout << "Larpity\n";
    }else if(even == 1 && odd == 1){
        cout << "Larpity\n";
    }else{
        cout << "Moggity\n";
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