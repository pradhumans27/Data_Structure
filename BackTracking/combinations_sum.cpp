/* The link of the problem is given below:-
https://leetcode.com/problems/combination-sum/description/
*/
class Solution {
public:
    vector<vector<int>> result;
    void solve(vector<int>& candidates, int target, vector<int> temp,
               int currsum, int i) {
        // Boundary check
        if (currsum > target)
            return;

        // base condition
        if (i == candidates.size()) {
            if (currsum == target) {
                result.push_back(temp);
            }
            return;
        }
        // inclusive
        currsum += candidates[i];
        temp.push_back(candidates[i]);
        solve(candidates, target, temp, currsum, i);
        // Exclusive
        currsum -= candidates[i];
        temp.pop_back();
        solve(candidates, target, temp, currsum, i + 1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> temp;
        int currsum = 0;
        solve(candidates, target, temp, currsum, 0);
        return result;
    }
};