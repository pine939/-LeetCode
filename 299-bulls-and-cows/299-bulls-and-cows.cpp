class Solution {
public:
    // only contains digits 
    string getHint(string secret, string guess) {
        int bulls = 0, cows = 0;
        map<char, int> sh, gh;
        // bulls 
        for (int i = 0; i < secret.size(); i++) {
            if (secret[i] == guess[i]) {
                bulls++;
            } else {
                sh[secret[i]] += 1;
                gh[guess[i]] += 1;   
            }
        }
        
        // cows
        for (auto i : sh) {
            cows += min(i.second, gh[i.first]);
        }
        
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};