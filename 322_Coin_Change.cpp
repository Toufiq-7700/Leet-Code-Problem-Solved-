class Solution {
public:
    int coinChange(vector<int>& coins, int M) {
        int d = coins.size(); 
        vector<int> minCoins(M + 1, INT_MAX);
        minCoins[0] = 0; 
        for (int m = 1; m <= M; m++) {
            for (int i = 0; i < d; i++) {
                if (m >= coins[i] && minCoins[m - coins[i]] != INT_MAX) {
                    minCoins[m] = min(minCoins[m], 1 + minCoins[m - coins[i]]);
                }
            }
        }
        return (minCoins[M] == INT_MAX) ? -1 : minCoins[M];
    }
};
