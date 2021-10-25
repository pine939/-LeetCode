class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int high = nums.size() - 1;
        vector<int> res(nums.size());
        int idx;
        for (int i = 0; i < nums.size(); i++) {
            idx = i + k;
            if (high < idx) {
                idx = idx % nums.size();
            }
            res[idx] = nums[i];
        }
        nums = res;
    }
};