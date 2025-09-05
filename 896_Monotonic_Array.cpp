class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool flag1=true;
        bool flag2=true;

        for(int i=1; i<nums.size(); i++){
            if((flag1||flag2) == false) return false;
            else if(nums[i-1] > nums[i])flag1=false;
            else if(nums[i] > nums[i-1])flag2=false;
        }
        
        return (flag1 || flag2);
    }
};
