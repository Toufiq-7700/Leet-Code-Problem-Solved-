class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        if(nums.size() == 1) return nums[0];
        
        int ans=nums[0];

        int cnt=1, i=0;
        sort(nums.rbegin(), nums.rend());
        // while(i < nums.size()-1){
        //     if(cnt == k){
        //         ans=nums[i];
        //     }
        //     if(nums[i] >= nums[i+1]){
        //         cnt++;
        //     }
        //     i++;
        // }
        //return ans;
        return nums[k-1];
    }
};
