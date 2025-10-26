class Solution {
public:
    long long maxAlternatingSum(vector<int> &nums) {
        int n = nums.size();
        vector<long long> sq(n);
        for (int i = 0; i < n; ++i) {
            sq[i] = 1LL * nums[i] * nums[i];
        }
        sort(sq.rbegin(), sq.rend());
        int k = (n + 1) / 2;
        long long ans = 0;
        for (int i = 0; i < k; i++) ans += sq[i];
        for (int i = k; i < n; i++) ans -= sq[i];

      return ans;
    }
};
