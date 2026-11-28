class Solution {
public:
    int maxNumberOfBalloons(string text) {

        // Step 1: Count required characters
        unordered_map<char, int> mp;

        for (int i = 0; i < text.size(); i++) {
            if (text[i] == 'b' || text[i] == 'a' ||
                text[i] == 'l' || text[i] == 'o' ||
                text[i] == 'n') {

                mp[text[i]]++;
            }
        }

        // Step 2: Calculate possible balloons
        int b = mp['b'] / 1;
        int a = mp['a'] / 1;
        int l = mp['l'] / 2;
        int o = mp['o'] / 2;
        int n = mp['n'] / 1;

        // Step 3: Return the minimum
        return min({b, a, l, o, n});
    }
};