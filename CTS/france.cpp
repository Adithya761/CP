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
    long long mni = INT_MAX;
    long long mxi = INT_MIN;
    for(long long i = 0;i < n;i++){
        mni = min(mni, a[i]);
        mxi = max(mxi, a[i]);
    }
    if(n == 1){
        cout << a[0] << "\n";
        return;
    }else if(mni == mxi){
        cout << mxi << "\n";
        return;
    }else{
        long long ans = mxi;
        for(int i = 60;i >= 0;i--){
            long long msbit = (1LL << i ) & mxi;
            long  long msbit2 = (1LL << i ) & mni;
            long long v = 0;
            if(msbit != msbit2){
                v = (1LL << i) -1;
            }
            ans = max(ans ,mxi |  v);
        }
        
        cout << ans << "\n";
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