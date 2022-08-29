// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int lower = 1, upper = n;
        int mid;
        
        while (lower < upper) {
            mid = lower + (upper - lower) / 2;
            if (!isBadVersion(mid)) {  // good version. search more upper version.
                lower = mid + 1;
            } else {
                upper = mid;
            }
            
        }
        return lower;
    }
    
};