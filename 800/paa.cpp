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
        string s;
        cin >> s;
        int i = 0;
        int j = n-1;
        while(i < j){
            if(s[i] != s[j]){
                i++;
                j--;
            }else{
                break;
            }
        }
        if(i > j){
            cout << 0 << "\n";
        }
        else if(i == j){
            cout << 1 << "\n";
        }
        else{
            cout << j-i+1 << "\n";
        }
    }
    return 0;
}

auto input = []() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return nullptr;
}();