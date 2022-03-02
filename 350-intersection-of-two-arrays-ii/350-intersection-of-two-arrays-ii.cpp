class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp;
        vector<int> answer;
        for (int i = 0; i < nums1.size(); i++) {
            mp[nums1[i]]++;
        }
        
        for (auto a : nums2) {
            if(mp[a]) {
                answer.push_back(a);
                mp[a]--;
            }
        }
        return answer;
    }
};
