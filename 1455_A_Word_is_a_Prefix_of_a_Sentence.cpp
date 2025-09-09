class Solution {
public:
    int isPrefixOfWord(string s, string src) {
        int ans=-1;
        int j=0;
        int i=0;
        int cnt=1;
       
        while(i<s.length()){
            if(s[i] == ' '){
                cnt++;
                j=0;
                i++;
                continue;
            }
            else if(s[i] == src[j]){
                j++;
                if(j == src.length()) return cnt;
            }
            else{
                while(i<s.length() && s[i] != ' '){
                        i++;
                    }
                    j=0;
                    continue;
            }
            i++;
        }

        return ans;
    }
};
