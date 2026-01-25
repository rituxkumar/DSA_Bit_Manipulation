class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        int result = INT_MAX;
        sort(begin(nums),end(nums));
        for (int i = 0; i <= n - k; i++) {
            for (int j = i + k - 1; j < n; j++) {
                result = min(result, nums[j] - nums[i]);
            }
        }
        return result;
    }
};