#include <map>
class Solution {
public:
    int longestPalindrome(string s) {
        // abcccdd -> dccaccd (7)
        // a -> a (1)
        
        /*
        펠린드롬 특징? 짝이 맞는다. 
        m[a] = 1
        m[b] = 1
        m[c] = 4
        m[d] = 2
        
        longest?
        짝수가 되면 무조건 더한다.
        그리고 map을 0으로 만들어서, 최종적으로 알파벳이 홀수개인 경우 1 / 짝수개인 경우 0이 되도록 한다.
        
        남은 1이 있다면 가운데 오도록 더한다.
        */
        map<char, int> m;
        int res = 0;
        for (int i = 0; i < s.size(); i++) {
            m[s[i]]++;
            if (m[s[i]] % 2 == 0) {
                res += m[s[i]];
                m[s[i]]= 0;
            }
        }
        
        for (auto i : m) {
            if (i.second == 1) {
                res++;
                break;
            }
        }
        
        return res;
    }
};