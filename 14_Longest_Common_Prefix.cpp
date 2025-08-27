class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = "";
        
        int n = strs.size();
        if(strs[0] == "") return s;

        string ss = strs[0];
        for(int i=0; i<strs[0].size(); i++){
            char ch = ss[i];
            int flag = 1;
            for(int j = 1; j<n; j++){
                string x = strs[j];
                char y = x[i];
                if(ch == y){
                    flag ++;
                }
                else break;
            }
            if(n == flag){
                s += ch;
            }
            else{
                break;
            }
        }
        return s;
    }
};
