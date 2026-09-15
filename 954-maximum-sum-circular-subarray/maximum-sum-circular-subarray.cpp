class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int n = nums.size();

        int totalSum = 0;

        int maxEnding = nums[0];
        int maxSum = nums[0];

        int minEnding = nums[0];
        int minSum = nums[0];

        for (int i = 0; i < n; i++) {
            totalSum += nums[i];

            if (i > 0) {
                // Kadane for maximum subarray
                maxEnding = max(nums[i], maxEnding + nums[i]);
                maxSum = max(maxSum, maxEnding);

                // Kadane for minimum subarray
                minEnding = min(nums[i], minEnding + nums[i]);
                minSum = min(minSum, minEnding);
            }
        }

        // If all elements are negative,
        // totalSum - minSum would give 0 (empty subarray)
        if (maxSum < 0) {
            return maxSum;
        }

        // Maximum circular subarray
        int circularSum = totalSum - minSum;

        return max(maxSum, circularSum);
    }
};
