class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string out;
        int tam = strs.size();
        int len = strs[0].size();
        for (int i = 0; i < len; i++) {
            for (int j = 1; j < tam; j++) {
                if (strs[0][i] != strs[j][i]) {
                    return out;
                }
            }
            out += strs[0][i];
        }
        return out;
    }
};