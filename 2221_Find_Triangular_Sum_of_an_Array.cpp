class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int ans;
        for(int x = nums.size()-1; x>=1; x--){
            for(int i=0; i<nums.size()-1; i++){
                int temp = (nums[i]+nums[i+1])%10;
                nums[i] = temp; 
            }
        }
        return nums[0];
    }
};
