
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        int i = 0, j = 0;

        string a = "";

        while (i < m && j < n) {
            a += word1[i++];
            a += word2[j++];
        }

        while (i < m)
            a += word1[i++];

        while (j < n)
            a += word2[j++];

        return a;
    }
};
