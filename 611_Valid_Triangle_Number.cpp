class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int cnt=0, n = nums.size()-1;
        sort(nums.begin(), nums.end());
        
        for(int k=n; k>=2; k--){
            int i=0, j=k-1; 
            while(i<j){
                if(nums[k] < nums[i]+nums[j]){
                    cnt += j-i;//all possible pair between i & j
                    j--;
                }
                else i++;
            }
        }
    return cnt;
    }
};
