class Solution {
public:
    void moveZeroes(vector<int> & nums) {
        int n = nums.size(); 
        int cnt = 0;

        int st = 0;
        for(int i=0; i<n; i++){
            if(nums[i] != 0){
               nums[st] = nums[i];
               st++;
            }
        }
        for(int i = st; i<n; i++){
            nums[i] = 0;
        }
    }
};
