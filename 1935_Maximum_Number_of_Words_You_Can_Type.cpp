class Solution {
public:

bool helper(char ch, string s){
    size_t x = s.find(ch);
    bool contains = (s.find(ch) != string::npos);
    if(contains) return true;
    return false;
}
    int canBeTypedWords(string text, string brokenLetters) {
        int cnt=0;
        for(int i=0; i<text.length(); i++){
            int j=i;
            bool flag= true;
            while(text[j] != ' ' && j<text.length()){
                if(helper(text[j],brokenLetters)){
                    flag=false;
                }
                j++;
            }
            i = j;
            if(flag)cnt++;
            flag= true;
        }
        return cnt;
    }
};
