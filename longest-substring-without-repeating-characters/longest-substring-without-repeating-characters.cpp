#include<unordered_map> 
class Solution {
public:
    unordered_map<char, int> hash;
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 0) return 0;
        
        int i = 0;
        int j = 0;
        int ret = 0;
        int temp = 0;
        while (j < s.size()) {
            char s_char = s[j];
            if (hash.find(s_char) == hash.end() || hash[s_char] < i) {
                hash[s_char] = j;
                temp++;
            } else {
                i = hash[s_char] + 1;
                temp = j - i + 1;
                hash[s_char] = j;
            }
            ret = max(ret, temp);
            j++;
        }
        return ret;
    }
};