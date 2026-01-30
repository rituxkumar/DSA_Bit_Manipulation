class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int sum = 0;
        int n = nums.size();

        // first window ka sum...
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        // slide the window
        int maxSum = sum;
        for (int i = k; i < n; i++) {
            sum = sum - nums[i - k] + nums[i];
            maxSum = max(maxSum, sum);
        }

        return (double)maxSum / k;
    }
};