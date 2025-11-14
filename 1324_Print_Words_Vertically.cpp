class Solution {
public:
    vector<string> printVertically(string s) {
        // 1. Split the string by spaces
        vector<string> words;
        string temp;
        for(char c : s){
            if(c == ' '){
                words.push_back(temp);
                temp.clear();
            } else {
                temp += c;
            }
        }
        words.push_back(temp);

        // find max word length
        int maxLen = 0;
        for(string &w : words){
            maxLen = max(maxLen, (int)w.size());
        }

        // 2. Build vertical output
        vector<string> ans;
        for(int i = 0; i < maxLen; i++){
            string row = "";
            for(string &w : words){
                if(i < w.size()) row += w[i];
                else row += ' ';
            }

            // remove trailing spaces
            while(!row.empty() && row.back() == ' ')
                row.pop_back();

            ans.push_back(row);
        }

        return ans;
    }
};
