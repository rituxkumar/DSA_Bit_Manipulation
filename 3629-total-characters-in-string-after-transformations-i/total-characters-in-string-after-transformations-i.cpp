class Solution {
public:
    int M = 1e9 + 7;

    int lengthAfterTransformations(string s, int t) {

        vector<int> mp(26, 0);

        for(char ch : s)
            mp[ch - 'a']++;

        for(int count = 1; count <= t; count++) {

            vector<int> temp(26, 0);

            for(int i = 0; i < 26; i++) {

                int freq = mp[i];

                if(i != 25) {
                    temp[i+1] = (temp[i+1] + freq) % M;
                }
                else {
                    temp[0] = (temp[0] + freq) % M;
                    temp[1] = (temp[1] + freq) % M;
                }
            }

            mp = temp;
        }

        int result = 0;

        for(int i = 0; i < 26; i++)
            result = (result + mp[i]) % M;

        return result;
    }
};
