class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int target = threshold * k;
        int sum = 0;
        int count = 0;
        int n = arr.size();
        // first window sum ...

        for (int i = 0; i < k; i++) {
            sum += arr[i];
        }
        if (sum >= target)
            count++;

        // slide the window...

        for (int i = k; i < n; i++) {
            sum = sum - arr[i - k] + arr[i];
            if (sum >= target)
                count++;
        }
        return count++;
    }
};