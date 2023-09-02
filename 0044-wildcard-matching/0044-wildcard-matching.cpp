class Solution {
public:
    bool isMatch(string s, string p) {
        int m = s.length(), n = p.length();
        int sIdx = 0, pIdx = 0, sStar = -1, pStar = -1;

        while (sIdx < m) {
            if (pIdx < n && (p[pIdx] == '?' || p[pIdx] == s[sIdx])) {
                sIdx++;
                pIdx++;
            } else if (pIdx < n && p[pIdx] == '*') {
                sStar = sIdx;
                pStar = pIdx;
                pIdx++;
            } else if (pStar != -1) {
                sStar++;
                sIdx = sStar;
                pIdx = pStar + 1;
            } else {
                return false;
            }
        }

        while (pIdx < n && p[pIdx] == '*')
            pIdx++;

        return pIdx == n;
    }
};
