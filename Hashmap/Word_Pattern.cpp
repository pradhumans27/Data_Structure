/* The link of the problem is given below:-
https://leetcode.com/problems/word-pattern/description/
*/
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char,string>mp;
        unordered_map<string ,bool>visited;
        vector<string>wordlist;

        stringstream st(s);
        int count  = 0;
        string word;
        while(st>>word)
        {
            count++;
            wordlist.push_back(word);
        }
        if(pattern.size()!=count) return false;

        for(int i = 0 ;i<pattern.size();i++)
        {
            char ch = pattern[i];
            
            if(mp[ch]=="" && visited[wordlist[i]]==true)
             return false;

             else if( mp[ch]=="")
             {
                mp[ch] = wordlist[i];
                visited[wordlist[i]] = true;
             }
             else
             {
                if(mp[ch]!=wordlist[i]) return false;
             }
        }
        return true;

    }
};