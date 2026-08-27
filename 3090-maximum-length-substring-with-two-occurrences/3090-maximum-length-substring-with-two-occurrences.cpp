class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> m;
        int left = 0;
        int ans = 0;

        for (int right = 0; right < s.length(); right++) {
            m[s[right]]++;

            while (m[s[right]] > 2) {
                m[s[left]]--;
                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};