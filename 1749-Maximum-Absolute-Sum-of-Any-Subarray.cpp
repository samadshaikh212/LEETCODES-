class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int i = 0;
        int best_ending = nums[0];
        int minbest_ending = nums[0];
        int ans = nums[0];
        int n = nums.size();
        int max_ans;
        int min_ans;

        for (int i = 1; i < n; i++) {
            int v1 = best_ending + nums[i];
            int v2 = nums[i];
            best_ending = max(v1, v2);
            ans = max(ans, best_ending);
            max_ans = max(ans, best_ending);
        }
        for (int j = 1; j < n; j++) {
            int v1 = minbest_ending + nums[j];
            int v2 = nums[j];
            minbest_ending = min(v1, v2);
            ans = min(ans, minbest_ending);
            min_ans = min(ans, minbest_ending);
        }
        return max(abs(max_ans), abs(min_ans));
    }
};