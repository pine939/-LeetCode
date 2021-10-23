class Solution {
public:
    string reverseWords(string s) {
        string r;
        vector<int> idx;
        int pre = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                idx.push_back(i);
            }
        }
        idx.push_back(s.size());
        for (int i = 0; i < idx.size(); i++) {
            for (int j = idx[i]-1; j >= pre; j--) {
                r += s[j];
            }
            pre = idx[i] + 1;
            if (pre == s.size() + 1) {
                break;
            }
            r += " ";
        }
        return r;
    }
};