class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        // for (int i = n - 1; i >= 0; i--) {
        //     if (digits[i] < 9) {
        //         digits[i]++;
        //         return digits;
        //     }
        //     digits[i] = 0;
        // }
        // digits.insert(digits.begin() , 1);
        // return digits;
        vector<int>ans;
        int carry = 1;
        for(int i =n-1;i>=0;i--){
            int sum =0;
            sum += carry+digits[i];
            ans.insert(ans.begin(),sum%10);
            carry = sum/10;

        }
        if(carry){
            ans.insert(ans.begin(),1);
        }

          return ans;
    }
};