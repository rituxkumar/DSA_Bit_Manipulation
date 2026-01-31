class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int low = 0;
        int right = letters.size() - 1;

        char ans = letters[0];

        while (low <= right) {
            int mid = low + (right - low) / 2;

            if (letters[mid] > target) {
                ans=letters[mid];
                right = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};