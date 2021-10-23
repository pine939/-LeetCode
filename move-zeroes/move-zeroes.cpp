class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> res;
        int zero_c = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                res.push_back(nums[i]);
            } else {
                zero_c++;
            }
        }
        for (int i = 0; i < zero_c; i++) {
            res.push_back(0);
        }
        nums = res;
    }
};