class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        int n = s.size();
        int i;
        string res = "";
        for (int i = 0; i < n; i++) {
            if (st.empty()) {
                st.push(s[i]); // Push the character, not 'i'
            } else if (st.top() ==
                       s[i]) { // Compare stack top with current character
                st.pop();      // If they match, remove the duplicate from stack
            } else {
                st.push(s[i]); // Otherwise, push the current character
            }
        }

        while (!st.empty()) {
            res.push_back(st.top());
            st.pop();
        }
        reverse(res.begin(), res.end());

        return res;
    }
};
