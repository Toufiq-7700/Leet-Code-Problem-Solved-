class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
        if (n < 2 * k) return false;
        if (k == 1 && n >= 2) return true;
        vector<bool> temp(n, false);
        for (size_t i = 0; i+k <= n; i++)
        {
            bool a = true;
            for(int j=i+1; j<i+k && j<n; j++){
                if(nums[j-1] >= nums[j]){
                    a = false;
                    break;
                }
            }
            temp[i] = a;
        }
        for(int i=0; i + 2*k <= n; i++){
            if(temp[i] && temp[i+k]) return true;
        }
    return false;
    }
};
