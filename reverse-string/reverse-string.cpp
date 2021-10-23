class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> r(0);
        for (int i = s.size()-1; i >= 0; i--){
            r.push_back(s[i]);
        }
        s = r;
    }
};