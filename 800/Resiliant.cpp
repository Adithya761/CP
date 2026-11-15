class Solution {
public:
    int resilientSubarray(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> A(n);
        for(int i = 0;i < nums.size();i++){
            A[i] = ((nums[i] % k) + k) % k;
            //cout << A[i] << " ";
        }
       // cout << endl;
        // nums [5 , 5] same remainder -> rem not Divisible
        // 
        int ml = 1;
        int l = 0;
        unordered_map<int,int> mp;
        for(int r = 0;r < n;r++){
            mp[A[r]]++;
            while(mp.size() > 1){
                mp[A[l]]--;
                if(mp[A[l]] == 0){
                    mp.erase(A[l]);
                }
                l++;
            }
            int len = r - l + 1;
            int re = A[r];
            // int s = re == 0 ? 1 : k / __gcd(k , re);
            int s = k /__gcd(k , re);
           // cout << s << " ";
            int v = 1 + ((len -1) /s) * s;
            if(v > 0){
                ml = max(v , ml);   
            }
           
        }
        return ml;
    }
};