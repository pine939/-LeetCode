class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) return false;
        
        const int MAXCHAR = 256;
        char maps[MAXCHAR] = {0, };
        char mapt[MAXCHAR] = {0, };
        
        for (int i = 0; i < s.size(); i++) {
            if (maps[s[i]] == 0 && mapt[t[i]] == 0) {
                maps[s[i]] = t[i];
                mapt[t[i]] = s[i];
                continue;
            }
            if (maps[s[i]] == t[i] && mapt[t[i]] == s[i]) {
                continue;
            }
            return false;
        }
        return true;
    }
};