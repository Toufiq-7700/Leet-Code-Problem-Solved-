class Solution {
public:
    int minOperations(vector<int>& nums) {
        int a = nums[0];
        for(int i=1; i<nums.size(); i++){
            if(a != nums[i]) return 1;
        }
        return 0;
    }
};
