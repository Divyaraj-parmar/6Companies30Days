class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        /*
        A = [4, 3, 2, 6]       
        F(0) = (0 * 4) + (1 * 3) + (2 * 2) + (3 * 6) = 0 + 3 + 4 + 18 = 25
        F(1) = (0 * 6) + (1 * 4) + (2 * 3) + (3 * 2) = 0 + 4 + 6 + 6 = 16
        F(2) = (0 * 2) + (1 * 6) + (2 * 4) + (3 * 3) = 0 + 6 + 8 + 9 = 23
        F(3) = (0 * 3) + (1 * 2) + (2 * 6) + (3 * 4) = 0 + 2 + 12 + 12 = 26
        --> F(1) = F(0) + Sum - 6 * (3+1) = F(0) + Sum - A[n-j] * n
        */
       if(nums.size() == 1) return 0;
        int sum = accumulate(nums.begin(), nums.end(), 0);
        vector<int> dp(nums.size(), 0);
        int n = nums.size();
        for(int i = 0; i < nums.size(); i++)
        {
            dp[0] += i * nums[i]; // storing the values in dp vector
        }
        for(int i = 1; i < nums.size(); i++)
        {
            dp[i] = dp[i - 1] - (n - 1) * nums[n - i] + (sum - nums[n - i]);
        }
        return *max_element(dp.begin(), dp.end()); 
    }
};