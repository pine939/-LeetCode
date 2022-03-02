class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int lsf = INT_MAX;  // least so far 
        int op = 0;  // overall profit 
        int pist = 0;  // profit if sold today
        
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < lsf) {  // we found new one which is smaller than previous one
                lsf = prices[i];  // update out least so far
            }
            pist = prices[i] - lsf;  // calculating profit if sold today
            if (op < pist) {  // we found best profit
                op = pist;  // update
            }
        }
        return op;
    }
};

