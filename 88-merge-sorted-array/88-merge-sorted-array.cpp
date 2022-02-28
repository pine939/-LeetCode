class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int j = 0;
        for (int i = m; i < m+n; i++) {
            nums1[i] = nums2[j];
            j++;
        }
        
        sort(nums1.begin(), nums1.end());
    }
};

/*
other case...
        map<int, int> mp;
        
        for (int i = 0; i < m; i++) {
            mp[nums1[i]]++;
        }
        for (int i = 0; i < n; i++) {
            mp[nums2[i]]++;
        }
        
        nums1.clear();
        for (auto i : mp) {
            while (i.second != 0) {
                nums1.push_back(i.first);
                i.second--;
            }
        }
*/