class Solution {
public:
    int fib(int n) {
        /* slow... 
        if (n <= 1) return n;
        if (n == 2) return 1;
        
        return (fib(n-1) + fib(n-2));
        */
        
        // faster
        int arr[31] = {0, 1, 0};
        for (int i = 2; i <= 30; i++) {
            arr[i] = arr[i-1] + arr[i-2];
        }
        return arr[n];
    }
};