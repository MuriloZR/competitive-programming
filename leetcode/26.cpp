class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int> mapita = {};
        int tam = nums.size();
        for (int i = 0; i < tam; i++) {
            mapita[nums[i]]++;
            if (mapita[nums[i]] > 1) {
                nums[i] = 101;
            }
        }
        sort(nums.begin(), nums.end());
        return mapita.size();
    }
};