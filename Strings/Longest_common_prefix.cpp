/* The link of the problem is given below :-
https://leetcode.com/problems/longest-common-prefix/description/
*/

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for (int i = 0; i <= strs[0].size(); i++) {
            for (auto s : strs) {
                if (i >= s.size() || s[i] != strs[0][i]) {
                    return ans;
                }
            }
            ans = ans + strs[0][i];
        }
        return ans;
    }
};