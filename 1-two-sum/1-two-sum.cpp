class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        if (nums.size() == 2) {
            return {0, 1};
            /*
            ans.push_back(0);
            ans.push_back(1);
            return ans;
            */
        }
        
        // find "target - nums[i]" in vector nums (not i index).
        unordered_map<int, int> hash;
        
        for (int i = 0; i < nums.size(); i++) {
            if (hash.find(target-nums[i]) != hash.end()) {  // found.
                //ans.push_back(i);
                //ans.push_back(hash[target-nums[i]]);
                //return ans;
                return {i, hash[target-nums[i]]};
            }
            // not found
            hash[nums[i]] = i;
        }
        
        return {};
    }
};

/*
// O(n^2)
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



*/