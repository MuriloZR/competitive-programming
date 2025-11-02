class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        int tam = nums.size();
        for (int i = 0; i < tam; i++) {
            if (nums[i] == val) {
                nums[i] = 101;
            } else {
                k += 1;
            }
        }
        sort(nums.begin(), nums.end());
        return k;
    }
};