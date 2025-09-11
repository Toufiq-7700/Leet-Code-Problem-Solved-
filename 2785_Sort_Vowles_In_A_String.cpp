class Solution {
public:
    string sortVowels(string s) {
        vector<char>ch;
        int j=s.length();
        for(int i=0; i<j; i++){
            if('a' == tolower(s[i]) || 'e' == tolower(s[i]) || 'i' == tolower(s[i]) || 'o' == tolower(s[i]) || 'u' == tolower(s[i]) ){
                ch.push_back(s[i]);
            }
        }
        sort(ch.rbegin(), ch.rend());

        for(int i=0; i<j; i++){
            if('a' == tolower(s[i]) || 'e' == tolower(s[i]) || 'i' == tolower(s[i]) || 'o' == tolower(s[i]) || 'u' == tolower(s[i]) ){
                s[i] = ch.back();
                ch.pop_back();
            }
        }
        return s;
    }
};
