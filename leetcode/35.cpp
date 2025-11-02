class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int i;
        int tam = nums.size();
        for (i = 0; i < tam && nums[i] < target; i+= 1);
        return i;
    }
};