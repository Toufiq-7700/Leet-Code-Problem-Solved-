class Solution {
public:
    void helper(vector<string> &ans, int i, string s){
        if(i == s.size()){
            ans.push_back(s);
            return;
        }
        helper(ans, i+1, s);
        if(s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = toupper(s[i]);
            helper(ans, i+1, s);
            s[i] = tolower(s[i]);
        }
        if(s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = tolower(s[i]);
            helper(ans, i+1, s);
            s[i] = toupper(s[i]);
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        helper(ans, 0, s);
        return ans;
    }
};
