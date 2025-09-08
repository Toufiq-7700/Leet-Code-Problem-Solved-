class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0, m =prices[0];
        int n = prices.size();
        if(n < 2) return 0;

        for(int i=1; i<n; i++){
            ans = max(ans , prices[i]-m);

            m = min(m,prices[i]);
        }

        return ans;
    }
};
