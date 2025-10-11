class Solution {
public:
    string greatestLetter(string s) {
        set<char, greater<char>> up;
        set<char, greater<char>> low;
        for(int i=0; i<s.length(); i++){
            if(s[i] >= 'a' && s[i] <= 'z'){
                low.insert(s[i]);
            }
            else{
                up.insert(s[i]);
            }
        }
        string a = "";
        for(char ch : up){
            char b = tolower(ch);
            if(low.count(b)){
                a += ch;
                break;
            }
        }
        return a;
    }
};
