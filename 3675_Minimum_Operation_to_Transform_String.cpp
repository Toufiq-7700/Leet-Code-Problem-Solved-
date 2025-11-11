class Solution {
public:
    int minOperations(string s) {
        int ans = -1;
        for(auto ch : s){
            if(ch =='a') continue;
            int num = ch-'a';
            ans = max(25-num, ans);
        }
        return ans+1;
    }
};
