class Solution {
public:
    bool isPalindrome(int x) {
        std::string s = std::to_string(x);
        std::string r = s;
        std::reverse(r.begin(), r.end());
        if (s == r) return true;
        return false;
    }
};