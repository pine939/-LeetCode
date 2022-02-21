class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> answer;
        if (nums.size() == 2) {
            answer.push_back(0);
            answer.push_back(1);
            return answer;
        }
        
        //target - nums[i]; 를 i+1 ~ end idx에서 찾음
        for (int i = 0; i < nums.size() - 1; i++) {
            int to_find = target - nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if (to_find == nums[j]) {
                    answer.push_back(i);
                    answer.push_back(j);
                    break;
                }
            }
        }
        return answer;
    }
};

/*
Brute Force 
*/