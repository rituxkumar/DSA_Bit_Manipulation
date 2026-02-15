class Solution {
public:
    int maxDepth(string s) {
        int maxDepth = 0;
        stack<int> st;
        for (char& c : s) {
            if (c == '(') {
                st.push(c);
                maxDepth = max(maxDepth, (int)st.size());
            } else if (c == ')') {
                st.pop();
            }
        }
        return maxDepth;
    }
};