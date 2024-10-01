/* The link of the problem is given below:-
https://leetcode.com/problems/container-with-most-water/
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int area = 0;
        while(left<right)
        {
            int lh = height[left];
            int rh = height[right];
            int min_height = min(lh,rh);
            area = max(area,min_height*(right-left));
            if(lh>rh)
            right--;
            else
            left++;
        }
        return area;
    }
};