class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        unordered_set<char> charSet;
        int l = 0;
        
        for (int i = 0; i < n; i++) {
            if (charSet.count(s[i]) == 0) {
                charSet.insert(s[i]);
                maxLength = max(maxLength, i - l + 1);
            } else {
                while (charSet.count(s[i])) {
                    charSet.erase(s[l]);
                    l++;
                }
                charSet.insert(s[i]);
            }
        }
        
        return maxLength;
    }
};