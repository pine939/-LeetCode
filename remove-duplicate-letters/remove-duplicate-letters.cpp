#include<unordered_map>
class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char, int> map;
        unordered_map<char, bool> used;
        stack<char> ans;
        int len = s.size();
        
        for (int i = 0; i < len; i++) {
            map[s[i]]++;
            used[s[i]] = false;
        }
        
        for (int i = 0; i < len; i++) {
            if (ans.empty()) {
                ans.push(s[i]);
                used[s[i]] = true;
            } else if (!used[s[i]]) {
                while (!ans.empty() && s[i] < ans.top()) {
                    if (map[ans.top()]) {
                        used[ans.top()] = false;
                        ans.pop();
                    } else {
                        break;
                    }
                }
                ans.push(s[i]);
                used[s[i]] = true;
            }
            map[s[i]]--;
        }
        
        string ansS;
        while(!ans.empty()) {
            ansS += ans.top();
            ans.pop();
        }
        reverse(ansS.begin(), ansS.end());
        return ansS;
    } 
};