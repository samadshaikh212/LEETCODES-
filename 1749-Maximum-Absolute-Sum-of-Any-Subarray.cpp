class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int max_ending = nums[0];
        int min_ending = nums[0];
        int max_sum = nums[0];
        int min_sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            max_ending = max(max_ending + nums[i], nums[i]);
            max_sum = max(max_sum, max_ending);
            min_ending = min(min_ending + nums[i], nums[i]);
            min_sum = min(min_sum, min_ending);
        }
        return max(abs(max_sum), abs(min_sum));
    }
};