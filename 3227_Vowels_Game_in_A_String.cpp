class Solution {
public:
    bool doesAliceWin(string s) {
    
        for(int i=0; i<s.length(); i++){
            if('a' == s[i] || 'e' == s[i] || 'i' == s[i] || 'o' == s[i] || 'u' == s[i] ){
                return true;
            }
        }
        return false;
    }
};
