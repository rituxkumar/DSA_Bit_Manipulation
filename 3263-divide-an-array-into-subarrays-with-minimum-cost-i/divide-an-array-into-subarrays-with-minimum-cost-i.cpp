class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n = nums.size();
        int firstMin = INT_MAX;
        int secondMin = INT_MAX;

        int score = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] < firstMin) {
                secondMin = firstMin;
                firstMin = nums[i];
            } else if (nums[i] < secondMin) {
                secondMin = nums[i];
            }
        }
        return score + firstMin + secondMin;
    }
};