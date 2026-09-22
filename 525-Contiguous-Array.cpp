class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int Maxlenght = 0;
        int In_sum = 0;

        unordered_map<int, int> mp;
        mp[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                In_sum--;
            else
                In_sum++;

            if (mp.find(In_sum) == mp.end()) {
                mp[In_sum] = i;
            } else {
                Maxlenght = max(Maxlenght, i - mp[In_sum]);
            }
        }

        return Maxlenght;
    }
};