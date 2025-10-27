class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int prev = 0;
        int ans = 0;
        for(auto s : bank){
            int cnt = count(s.begin(), s.end(), '1');
            if(cnt > 0){
                ans += cnt * prev;
                prev = cnt;
            }
        }
    return ans;
    }
};
