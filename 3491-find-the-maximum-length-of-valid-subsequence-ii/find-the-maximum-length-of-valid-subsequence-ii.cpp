class Solution {
public:
    int maximumLength(vector<int>& nums, int k) {
        int n = nums.size();
        vector<vector<int>>dp(n , vector<int>(k , 1));
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < i; j++){
                int id = (0LL + nums[i] + nums[j]) % k;
                dp[i][id] = max(dp[i][id] , dp[j][id] + 1);
            }
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < k; j++){
                ans = max(ans , dp[i][j]);
            }
        }
        return ans;
    }
};