class Solution {
public:
    bool helper(string row, char ch) {
        return (row.find(ch) != string::npos);
    }

    bool checkRow(string word, string row) {
        for (char c : word) {
            if (!helper(row, tolower(c))) 
                return false;
        }
        return true;
    }

    vector<string> findWords(vector<string>& words) {
        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";
        vector<string> ans;

        for (string word : words) {
            if (checkRow(word, s1) || checkRow(word, s2) || checkRow(word, s3)) {
                ans.push_back(word);
            }
        }
        return ans;
    }
};
