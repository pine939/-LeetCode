class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int length = temperatures.size();
        vector<int> res(length);
        stack<int> s;
        for (int i = 0; i < length; i++) {
            while(!s.empty() &&  (temperatures[s.top()] < temperatures[i])) {
                res[s.top()] = i - s.top();
                s.pop();
            }
            s.push(i);
        }
        
        return res;
    }
};