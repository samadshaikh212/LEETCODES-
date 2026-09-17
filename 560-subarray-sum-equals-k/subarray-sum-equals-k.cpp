class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum = 0;
        int res = 0;
        unordered_map<int, int> f;
        f[0] = 1;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            int ask_target = sum - k;
            int frequescy = f[ask_target];
            res += frequescy;
            f[sum]++;
        }
        return res;
    }
};

/*int findAllSubarraysWithGivenSum(vector < int > & arr, int k
map‹int, int> mpp;
mpp [0] = 1;
int preSum = 0, cnt = 0;
for(int i = 0;i<arr.size(); i++) {
    preSum += arrlil;
    int remove = preSum - k;
cnt += mpp [removel;
mpp[preSum] += 1;
return cnt;
}*/