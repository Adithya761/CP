#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve() {
    long long n;
    cin >> n;
    long long a = 1;
    long long b = n-1;
    for(int i = 2;i * i <= n ;i++){
        if(n % i == 0){
            a = n /i;
            b = n - a;
            break;
        }
    }
    cout << a << " " << b << "\n";
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