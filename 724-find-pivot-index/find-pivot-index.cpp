class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int leftSum = 0;

        // Calculate total sum
        for (int i = 0; i < nums.size(); i++) {
            totalSum += nums[i];
        }

        // Check every index
        for (int i = 0; i < nums.size(); i++) {
            int rightSum = totalSum - leftSum - nums[i];

            if (leftSum == rightSum) {
                return i;
            }

            // Current element becomes part of left side
            leftSum += nums[i];
        }

        return -1;
    }
};