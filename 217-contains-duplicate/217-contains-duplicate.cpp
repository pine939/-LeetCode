#include <algorithm>
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int res = false;
        if (nums.size() == 1) return false;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                res = true;
                break;
            }
        }
        return res;
    }
    
};

/*
vector sorting
  sort(a.begin(), a.end(), compare);
  a.begin()은 a의 시작 주소
  a.end()은 a의 마지막 주소
*/