class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int flag=0;
        for(int i=2; i<nums.size(); i++){
            if(nums[i] == nums[i-2] && nums[i] == nums[i-1]){
                nums[i-2]= nums[i];
                i--;
                nums.erase(nums.begin()+i);
            }
        }
        return nums.size();
    }
};
