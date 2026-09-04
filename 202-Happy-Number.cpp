class Solution {
public:
    int calculate_sqaure(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10; // take last digit
            n = n / 10;     // remove last digit
            sum = sum + d * d;
        }
        return sum;
    }
    bool isHappy(int n) {
        int slow = n;
        int fast = n;

        while (fast != 1) {
            slow = calculate_sqaure(slow);
            fast = calculate_sqaure(fast);
            fast = calculate_sqaure(fast);
            if (slow == fast and slow != 1) {
                return false;
            }
        }
        return true;
    }
};