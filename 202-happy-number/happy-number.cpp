class Solution {
public:
    bool isHappy(int n) {

        if (n == 1) {
            return true;
        }
        unordered_set<int> st;
        while (n != 1 && !st.count(n)) {
            st.insert(n);
            long long curr = n;
            long long sum = 0;
            while (curr) {
                long long digit = curr % 10;
                sum += digit * digit;

                curr = curr / 10;
            }

            n = sum;
        }

        return n == 1;
    }
};