class Solution {
public:
    //    string build(string s){
    //    stack<char>st;
    //        if(st){
    //         if( s == '#'){
    //             st.push()
    //         }
    //        }
    //    }

    bool backspaceCompare(string s, string t) {
        // return build(s) == build(t);

        stack<char> st;
        stack<char> st1;

        for (char& ch : s) {
            if (ch == '#') {
                if (!st.empty()) {
                    st.pop();
                }

            } else {
                st.push(ch);
            }
        }
        for (char& ch : t) {
            if (ch == '#') {

                if (!st1.empty()) {
                    st1.pop();
                }
            } else {
                st1.push(ch);
            }
        }
        return st == st1;
    }
};