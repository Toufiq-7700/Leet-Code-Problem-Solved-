class Solution {
public:
    long long splitArray(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = n-1;
        long long rightsum = 0, leftsum = 0;
        while(l < n-1 && nums[l]<nums[l+1]){
            leftsum += nums[l];
            l++;
        }
        while(r > 0 && nums[r]<nums[r-1]){
            rightsum += nums[r];
            r--;
        }
        if(l == r){
            long long a = abs((leftsum + nums[l]) - rightsum);
            long long b = abs((nums[l] + rightsum) - leftsum);
            return min(a, b);
        }
        if(r - l == 1 && nums[l] == nums[r]){
            return abs(leftsum - rightsum);
        }

    return -1;
    }
};
