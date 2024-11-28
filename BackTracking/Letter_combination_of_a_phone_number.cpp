/* The link of the problem is given below:-
https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/
*/
class Solution {
public:
void help(int i, string &digits,string &temp,vector<string>&ans,unordered_map<char,string>&m)
{
    string str = m[digits[i]];
    if(digits.size()==0)
    {
        return ;
    }
    if(i==digits.size())
    {
        ans.push_back(temp);
        return ;
    }
    for(int j = 0;j<str.size();j++)
    {
        temp.push_back(str[j]);
        help(i+1,digits,temp,ans,m);
        temp.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>m;
        m['2'] = "abc";
        m['3'] = "def";
        m['4'] = "ghi";
        m['5'] = "jkl";
        m['6'] = "mno";
        m['7'] = "pqrs";
        m['8'] = "tuv";
        m['9'] = "wxyz";
        string temp;
        vector<string>ans;
         help(0,digits,temp,ans,m);
         return ans;
    }
};