class Solution {
public:
   vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n, 0); // 1. Properly initialized vector of size n with default 0
        stack<int> st;

        // Traverse from right to left
        for (int i = n - 1; i >= 0; i--) {
            // 2. Pop elements that are less than or equal to current temperature
            while (!st.empty() && temperatures[st.top()] <= temperatures[i]) {
                st.pop();
            }

            // 3. If the stack is not empty, the top index is the next warmer day
            if (!st.empty()) {
                res[i] = st.top() - i; // Distance calculation
            }

            // 4. Push current index onto stack
            st.push(i);
        }

        return res;
    }
};
