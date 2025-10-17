class Solution {
public:
    int longestBalanced(string s) {
        int n =s.length();
        int ans = 0;
        for(int i=0; i<n; i++){
            unordered_map<char,int> mp;
            for(int j=i; j<n; j++){
                int maxfreq = INT_MIN;
                int minfreq = INT_MAX;
                mp[s[j]]++;
                for(auto x : mp){
                    maxfreq = max(x.second, maxfreq);
                    minfreq = min(x.second, minfreq);
                }
                if(minfreq == maxfreq){
                    ans = max(ans, j - i + 1);
                }
            }
        }
        return ans;
    }
};
