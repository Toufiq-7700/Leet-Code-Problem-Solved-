class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int l=0;
        int r=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(l<r){
            int currsum =  nums[l] + nums[r];
            if(currsum == target){
                ans.push_back(l);
                ans.push_back(r);
                return ans;
            }
            else if(currsum < target) l++;
            else r--;
        } 
        return ans;
    }
};
