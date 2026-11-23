class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> mp;
        // loading the hashmap with the elements of magazine
        for (int i = 0; i < magazine.size(); i++) {
            mp[magazine[i]]++;
        }
        // Will it rate the ransom note and reduce the elements from magazine?
        for (int i = 0; i < ransomNote.size(); i++) {
            // If the character is available (frequency > 0), use it by
            // decrementing its frequency.
            if (mp[ransomNote[i]] > 0) {
                mp[ransomNote[i]]--;
            } else {
                return false;
            }
        }
        return true;
    }
};