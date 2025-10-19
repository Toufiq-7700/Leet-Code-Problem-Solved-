class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        unordered_set<int> odd, even;
        int maxi=0;
        int n = nums.size();
        for(int i=0; i<n; i++){
            odd.clear();
            even.clear();
            for(int j=i; j<n; j++){
                if(nums[j] % 2 == 0) even.insert(nums[j]);//nums[j]&1 == 0 -> even
                else odd.insert(nums[j]);
                if(odd.size() == even.size()) maxi = max(maxi, j-i+1);
            }
        }
        return maxi;
    }
};
