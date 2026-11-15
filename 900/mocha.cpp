#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t;

	
	while (t--)
	{
		int n;
        cin >> n;
        vector<int> A(n);
        int mxi = -1;
        int midx = -1;

        for(int i = 0;i < n;i++){
            cin >> A[i];
            if(A[i] > mxi){
                mxi = A[i];
                midx = i;
            }
        }
        int ans = A[0];
        for(int i = 1;i < n;i++){
            ans = ans & A[i];
        }
        cout << ans << "\n";
    
	}

	return 0;
}

