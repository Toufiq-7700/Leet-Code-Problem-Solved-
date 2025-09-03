class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int ans=0, k=0;
        sort(nums.begin(), nums.end());

        while(k < nums.size()){
            ans += nums[k];
            k += 2;
        }

        return ans;
    }
};
