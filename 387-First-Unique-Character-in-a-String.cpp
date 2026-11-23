class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> mp;

        // Step 1: Count frequencies
        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }

        // Step 2: Find first unique character
        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] == 1) {
                return i;
            }
        }

        return -1;
    }
};
