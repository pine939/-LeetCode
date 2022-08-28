class Solution {
public:
    bool isSubsequence(string s, string t) {
        int idx = 0;
        for (char c:t) {
            // c == 'a'; s[0] == 'a'; idx++; 
            if (s[idx] == c) idx++;
        }
        
        return idx == s.size();
    }
};