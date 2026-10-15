
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();

        if (n == 0)
            return "";

        string t = "#";
        for (char c : s) {
            t += c;
            t += '#';
        }

        int m = t.size();
        vector<int> P(m, 0);

        int C = 0, R = 0;
        int maxLen = 0, center = 0;

        for (int i = 0; i < m; i++) {
            int mirror = 2 * C - i;

            if (i < R)
                P[i] = min(R - i, P[mirror]);

            while (i - P[i] - 1 >= 0 &&
                   i + P[i] + 1 < m &&
                   t[i - P[i] - 1] == t[i + P[i] + 1]) {
                P[i]++;
            }

            if (i + P[i] > R) {
                C = i;
                R = i + P[i];
            }

            if (P[i] > maxLen) {
                maxLen = P[i];
                center = i;
            }
        }

        int start = (center - maxLen) / 2;
        return s.substr(start, maxLen);
    }
};
