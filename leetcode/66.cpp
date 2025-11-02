class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        short len = digits.size();

        digits[len-1] += 1;

        for (int i = len-1; i > 0; i--) {
            if (digits[i] == 10) {
                digits[i] = 0;
                digits[i-1] += 1;
            }
        }

        if (digits[0] == 10) {
            digits[0] = 0;
            digits.resize(len+1);
            for (int j = len; j > 0; j--) {
                digits[j] = digits[j-1];
            }
            digits[0] = 1;
        }

        return digits;
    }
};