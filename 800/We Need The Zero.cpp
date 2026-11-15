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
        vector<int> A(n);
        for (int i = 0; i < n; i++)
        {
            cin >> A[i];
        }

        int txor = 0;
        for(int i = 0; i < n; i++)
        {
            txor ^= A[i];
        }
        if(n % 2 == 0 && txor != 0){
            cout << - 1 << endl;
        }else{
            cout << txor << endl;
        }

    }
    return 0;
}

auto init = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();