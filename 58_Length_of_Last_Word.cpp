class Solution {
public:
    int lengthOfLastWord(string s) {
        int temp;
        int n = s.length()-1;
        int i = n;
        for(i = n; i>=0; i--){
            if(s[i] == ' ')continue;
            else break;
        }
        temp = i;
        
        while(i >= 0 && s[i] != ' '){
            i--;
        }

        return temp-i;
    }
};
