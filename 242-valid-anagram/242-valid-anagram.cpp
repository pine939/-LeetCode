class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> vs;
        vector<int> vt;
        bool ans = true;
        if (s.size() != t.size()) return false;
        for (int i = 0; i < s.size(); i++) {
            vs.push_back(s[i] - 'a');
            vt.push_back(t[i] - 'a');
        }
        
        sort(vs.begin(), vs.end());
        sort(vt.begin(), vt.end());
        
        for (int i = 0; i < s.size(); i++) {
            if (vs[i] != vt[i]) {
                return false;
            }
        }
            
        return ans;
    }
};