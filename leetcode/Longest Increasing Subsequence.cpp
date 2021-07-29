class Solution {
    
public:
    long long int ll; 
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size(); 
        const int inf = 1e9; 
        vector<int> dp (n+1, inf); 
        dp[0] = -inf; 
        
        for (int i = 0; i<n; i++ ) {
            int j = upper_bound( dp.begin(), dp.end(), nums[i]) - dp.begin();
            if ( dp[j-1]<nums[i] && nums[i]< dp[j]) {
                dp[j] = nums[i]; 
            }
        }
        
        int ans = 0; 
        for (int i = 0; i<=n; i++) {
            if ( dp[i]<inf ) {
                ans = i; 
            } 
        }
        return ans; 
    }
};
