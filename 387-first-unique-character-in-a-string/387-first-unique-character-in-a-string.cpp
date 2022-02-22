class Solution {
public:
    int firstUniqChar(string s) {
        vector<pair<int, int>> v;  // key, idx
        int ans = -1, min = 999999;
        for (int i = 0; i < 26; i++) {
            v.push_back(make_pair(i, -1));
        }
        
        for (int i = 0; i < s.size(); i++) {
            int ascii = s[i] - 'a';
            if (v[ascii].second == -1) {
                v[ascii].second = i;
            } else if (v[ascii].second >= 0) {  // duplicated!
                v[ascii].second = -2;
            } else {
                continue;
            }
        }
        
        for (int i = 0; i < 26; i++) {
            if (v[i].second < 0) continue;
            if (min > v[i].second) {
                min = v[i].second;
            }
        }
        if (min < s.size()) {
            ans = min;
        }
        return ans;
    }
};