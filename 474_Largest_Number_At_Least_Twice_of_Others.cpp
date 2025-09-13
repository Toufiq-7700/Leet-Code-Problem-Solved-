class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int maxidx=-1;
        int max=INT_MIN;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>max){
                max=nums[i];
                maxidx=i;
            }
        }
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != max && max < nums[i]*2){
                maxidx=-1;
                break;
            }
        }
       return maxidx; 
    }
};
