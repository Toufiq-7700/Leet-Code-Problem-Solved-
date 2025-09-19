class Solution {
public:
    bool helper(char ch, string s){
        return (s.find(ch) != string::npos);
    }
    int numJewelsInStones(string jewels, string stones) {
        int cnt=0;
        for(auto ch:stones){
            if(helper(ch,jewels)){
                cnt++;
            }
        }
        return cnt;
    }
};
