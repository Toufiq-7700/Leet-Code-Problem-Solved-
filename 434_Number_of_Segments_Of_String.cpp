class Solution {
public:
    int countSegments(string s) {
        if(s.length() == 0) return 0;
        
        int cnt=0;
        string temp="";

        for(auto x : s){
            if(x == ' '){
                if(temp.length() > 0){
                    temp = "";
                    cnt++;
                }
            }
            else temp += x;
        }
        if(temp.length() > 0) cnt++;

        return cnt;
    }
};
