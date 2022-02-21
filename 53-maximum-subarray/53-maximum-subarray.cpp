#include<algorithm>
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int res = nums[0];
        int tmp_max = nums[0];
        if (nums.size() == 1) return nums[0];
        for (int i = 1; i < nums.size(); i++) {
            tmp_max = max(nums[i], tmp_max + nums[i]);
            res = max(tmp_max, res);
        }
        return res;
    }
};

/*
카데인 알고리즘 
끝나는 원소를 기준으로 max를 찾는다. 

nums = [5, 4, -1, 7, 8]

E(0) = [5] --> 5 ==> 5  // only nums(0)
E(1) = [{5, 4}, {4}]  --> 9, 4 ==> 9 // max(M(0)+nums(1), nums(1))
E(2) = [{5, 4, -1}, {4, -1}, {-1}]  --> 8, 3, -1 ==> 8  // max(M(1)+nums(2), nums(2))
E(3) = [{5, 4, -1, 7}, {4, -1, 7}, {-1, 7}, {7}]  --> 15, 10, 6, 7 ==> 15  // max(M(2)+nums(3), nums(3))
E(4) = [{5, 4, -1, 7, 8}, {4, -1, 7, 8}, {-1, 7, 8}, {7, 8}, {8}]  --> 23, 18, 14, 15, 8  ==> 23  // max(M(3)+nums(4), nums(4))

E(i+1) = E(i) + nums(i+1)

M(i+1) = max(M(i)+nums(i+1), nums(i))
*/