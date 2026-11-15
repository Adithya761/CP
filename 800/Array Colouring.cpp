#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;

        vector<long long> b(n);

        for (int i = 0; i < n; i++)
            cin >> b[i];
        
        long long sum = accumulate(b.begin(), b.end(), 0LL);

        if(sum % 2 == 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
    return 0;
}

auto input = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();