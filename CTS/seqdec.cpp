#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> A(n);
  int mni = INT_MAX;
  for(int i = 0;i < n;i++){
    cin >> A[i];
    mni = min(mni , A[i]);
  }
  if(mni < n){
    cout << n << "\n";
  }else{
    cout << 0 << "\n";
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