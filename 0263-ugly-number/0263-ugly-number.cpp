class Solution {
public:
    bool isUgly(int n) {
        // Edge case: numbers less than or equal to 0 are not ugly
        if (n <= 0) return false;

        // Repeatedly divide by 2, 3, and 5 if divisible
        while (n % 2 == 0) n /= 2;
        while (n % 3 == 0) n /= 3;
        while (n % 5 == 0) n /= 5;

        // If the remaining number is 1, it's an ugly number
        return n == 1;
    }
};