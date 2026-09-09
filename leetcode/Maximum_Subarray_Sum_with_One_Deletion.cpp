class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int noDelete = arr[0];
        int oneDelete = arr[0];
        int ans = arr[0];
        int n =arr.size();

        for (int i = 1; i < n; i++) {
            int oldNoDelete = noDelete;

            noDelete = max(oldNoDelete + arr[i], arr[i]);
            oneDelete = max(oldNoDelete, oneDelete + arr[i]);

            ans = max(ans, max(noDelete, oneDelete));
        }
        return ans;
    };
};