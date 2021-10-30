// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(long long n) {
        long long low = 0;
        long long high = n - 1;
        long long res = n;
        long long mid;
        while (high >= low) {
            mid = (low + high) / 2;
            if (!isBadVersion(mid)) {  // 오른쪽에 res있음
                low = mid + 1;
                if (isBadVersion(low)) return low;
                res = low;
            } else {  // 왼쪽에 res있음
                high = mid - 1;
                if (!isBadVersion(high)) return high+1;
                res = high;
            }
        }
        
        return res;
    }
};