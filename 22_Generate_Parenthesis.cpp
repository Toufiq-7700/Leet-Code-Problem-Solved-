class Solution {
public:
    void helper(vector<string> &res, int left, int right, string s, int n){
            if(s.length() == n*2){
                res.push_back(s);
                return;
            }
            if(left<n){
                helper(res,left+1,right,s+"(",n);
            }
            if(right<left){
                helper(res,left,right+1,s+")",n);
            }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string s="";
        int left=0, right=0;
        helper(res,left,right,s,n);
        return res;
    }
};
