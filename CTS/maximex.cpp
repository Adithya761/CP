#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n , k;
    cin >> n >> k;
    vector<int> A(n);
    for(int i = 0;i < n;i++){
        cin >> A[i];
    }
    int b_i = -1;
    int b_j = -1;
    int ans = -1;

    vector<int> t(103 , 0);
    vector<int> m(n);
    for(int i = 0;i < n;i++){
        t[A[i]]++;
        int pos = -1;
        for(int j = 0;j < 103;j++){
            if(!t[j]){
                pos = j;
                break;
            }
        }
        m[i] = pos;
    }
    sort(m.begin() , m.end() , greater<int>());
    ans = m[k-1];
               
    for(int i = 0;i < n;i++){
        for(int j = i + 1;j < n;j++){
            swap(A[i] , A[j]);
            vector<int> f(103 , 0);
            vector<int> mex(n);

            for(int p = 0;p < n;p++){
                f[A[p]]++;
                int pos = -1;
                for(int x = 0;x < 103;x++){
                    if(!f[x]){
                        pos = x;
                        break;
                    }
                }
                mex[p] = pos;
            }
            sort(mex.begin() , mex.end() , greater<int>());
            if(mex[k-1] > ans){
                ans = mex[k -1];
                b_i = i;
                b_j = j;
            }

            swap(A[i] , A[j]);
        }
    }

    if(b_i == -1){
        cout << -1 << "\n";
    }else{
        cout << b_i + 1 << " " << b_j + 1 << "\n";   
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}