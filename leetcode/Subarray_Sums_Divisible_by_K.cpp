class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {

        unordered_map<int, int> mp;
        int sum = 0;
        int rem = 0;
        mp[0] = 1;
        int count = 0;
        // initialize

        for (int i = 0; i < nums.size(); i++) {
            // update prefix sum
            sum += nums[i];

            // calculate remainder
            rem = sum % k;
            if (rem < 0) {
                rem = rem + k;
            }

            int freq = mp[rem];
            count += freq;
            mp[rem]++;

        }

        return count;
    }
};
