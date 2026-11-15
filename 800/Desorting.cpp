#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
       int n;
       cin >> n;

       vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int minDiff = INT_MAX;
        bool sorted = true;
        for(int i = 1; i < n; i++){
            if(a[i] < a[i-1]){
                sorted = false;
            }
            minDiff = min(minDiff, a[i] - a[i-1]);
        }

        if(!sorted){
            cout << 0 << endl;
        }
        else{
            int ops = minDiff / 2 +  1;
            cout << ops << endl;
        }
    }
    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();